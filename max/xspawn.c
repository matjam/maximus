#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <signal.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>
#include <prog.h>
#include "ntcomm.h"
#include "process.h"
#include "protod.h"
#include "io.h"

#define unixfd(hc)      FileHandle_fromCommHandle(ComGetHandle(hc))

static void noop(int sig)
{
  ;
}

extern HCOMM hcModem;

int xxspawnvp(int mode, const char *Cfile, char *const argv[])
{
  pid_t		pid;
  struct stat	sb;
  char		*file;
  FILE* 	fp = NULL;
  int i;
  char tmp[1024];
  char buffer[80];

  signal(SIGCHLD, noop);

  file = fixPathDup(Cfile);

  if (!Cfile || stat(file, &sb))	/* Provide errno e.g. EPERM, ENOENT to caller */
    return -1;

  free(file);

  if (mode != P_OVERLAY)
    pid = fork();
  else
    pid = 0; /* fake being a child */

  if (pid) /* Parent */
  {
    if ((mode == P_NOWAIT) || (mode == P_NOWAITO))
    {
      return 0;
    }

    if (mode == P_WAIT)
    {
      int status;
      pid_t dead_kid;

      sleep(0);

      do
      {     
        errno = 0;
        dead_kid = waitpid(pid, &status, 0);
	if (dead_kid == pid)
          break;
      } while(errno != EINTR);

      if (dead_kid != pid)
        return -1;

      if (WIFEXITED(status))
        return 0; /* normal child exit */

      if (WIFSIGNALED(status))
        fprintf(stderr, "%s: Child (%s) exited due to signal %i!\n", __FUNCTION__, Cfile, WSTOPSIG(status));

      return -1;
    }
    return 0;
  }
  else /* child */
  {

    if (mode == P_NOWAITO)
    {
	/* Parent will not reap -- use double fork trick to avoid zombies */

	pid = getpid();
	signal(SIGCHLD, SIG_IGN);
	(void)setpgid(pid, pid); 
	if (fork())
          _exit(0);
    }

    if(!hcModem)
       dup2(unixfd(hcModem), 0);
  
    memset(tmp, 0, 1024);
    
    for(i=0; argv[i]; i++)
    {
	strcat(tmp, argv[i]);
        strcat(tmp, " ");
    }
		  
    fp = popen(tmp, "r");
 
    if(!fp)
	exit(1);
  
    while(fgets(buffer, 80, fp))
    	Puts(buffer);

    pclose(fp);																					

    _exit(1);
  }
}
