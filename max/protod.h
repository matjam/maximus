/*
 * Maximus Version 3.02
 * Copyright 1989, 2002 by Lanius Corporation.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

cpp_begin()

void Update_User(void);
int TrackNeedToInsertRemoteMsg(PMAH pmah, XMSG *pxmsg, char *kludges);
void CLIMax(void);
void mdm_hangup(void)  /* Do the raise DTR/drop DTR thingy */;
void Shell_To_Dos(void);
int mdm_gets(char *string,int type,int c,int max,char *prompt);
void ChatSetStatus(int avail,char *status);
void ChatSaveStatus(struct _css *css);
void ChatRestoreStatus(struct _css *css);
int ChatSendMsg(byte tid,int type,int len,char *msg);
int ChatOpenIPC(byte tid);
void ChatCloseIPC(int fd);
void Check_For_Message(char *s1,char *s2);
word Msg_Read_Lines(HMSG msgh, word msglines, word width, word soft_width, byte **outline, byte linetype[], byte *last_line_attr, word flag);
long Read_Chars(HMSG msgh,char *s,int num);
void cdecl logit(char *format,...);
void Delay(unsigned int duration);
void Giveaway_Slice(void);
void Draw_StatusLine(int clearit);
void Draw_StatusLine(int clearit);
char * Strip_Ansi(char *s,char *area,long msgnum);
void Mdm_Flow(int state);
char * Timestamp_Format(char *format,union stamp_combo *sstamp,char *out);
char * Strip_Underscore(char *s);
void Blank_User(struct _usr *user);
void Find_Class_Number(void);
void You_Cant_Get_There(void);
int isblstr(char *s);
long Add_To_Time(long seconds);
sword Allocate_Line(int linenum);
void Free_Line(int linenum);
void Free_All(void);
char * Help_Level(int help);
char * Keys(long key);
void _stdc FinishUp(void);
word CanSeeMsg(XMSG *msg);
int ParseCustomMsgAreaList(PMAH pmah, char *div, char *parm, char *outparm, int first, int ch);
int ParseCustomFileAreaList(PFAH pfah, char *div, char *parm, char *outparm, int first);
void Sys_Rst(void);
int Highbit_Allowed(void);
void FindLR_Start(long usr_rec);
void FindLR_AddOne(int lr_ptr, char *pszName);
int FindLR_GetFreePtr(void);
void FindLR_Stop(void);
signed int timeleft(void);
signed int timeonline(void);
void Local_Beep(int n);
int Convert_Star_To_Task(char *filename);
char * fancier_str(char *str);
char * Strip_Trailing_Blanks(char *s);
int is_wd(char ch);
void WhiteN(void);
void NoWhiteN(void);
void Press_ENTER(void);
int MoreYnBreak(char *nonstop,char *colour);
int Trim_Line(char *s);
void Msg_Area_Tag(void);
int Msg_Tag_Area(char *inp, int do_which);
int TagMoreBreak(char *nonstop);
char *No_Path(char *orig);
char *Area_Message_Type(int attr);
int ChatFindIndividual(byte tid,char *username,char *status,word *avail);
void Who_Is_On(void);
void ChatHandleMessage(byte tid,int type,int len,char *msg,int *redo);
void ChatCleanUp(void);
int _stdc fnsplit(const char*path,char *drive,char *dir,char *name,char *ext);
void SnSetPipeName(char *str);
int LogOpen(void);
void LogClose(void);
int LogWrite(char *str);
void LogFlush(void);
void SnWrite(char *str);
void Init_Variables(void);
void Parse_Args(char *ctlname,int argc,char *argv[]);
char * Startup(void);
void Read_Prm(char *ctlname);
void Read_Access();
void Compare_Dates(char *ctlname,char *prmname);
int Read_Stats(struct _bbs_stats *bstats);
void Write_Stats(struct _bbs_stats *bstats);
int quit(int el)  /* A substitute for exit, it exits with error code <erl> */;
void FinishUp2(int hangup);
unsigned int Decimal_Baud_To_Mask(unsigned int bd);
int System_Restart(char *restart_name);
void Fossil_Install(int fInitVideo);
void Got_A_Null_Pointer(char *type, char *where);
int _stdc yellchk(void);
int UserList(void);
void Statistics(void);
void Chg_Username(void);
void Chg_City(void);
void Chg_Alias(void);
void Chg_Phone(void);
int _stdc Display_File(word type, char *o_nonstop, char *fname,...);
int Parse_Priv(FILE *bbsfile)  /* 1==EOF 2==EOL */;
char * Ordinal(long number);
void Get_To_Blank(char *s,FILE *f);
int stravtlen(char *s) /* To calculate len of string with \x16\x01\xXX seqs */;
int Parse_Outside_Cmd(char *parm,char *outparm);
void File_Raw(void);
void Get_File_Description(char *filename,long fsize,char *dsc);
char * Remove_Files_Entry(char *filename,char *description);
void File_Hurl(void);
void File_Override_Path(void);
sword Get_New_Date(union stamp_combo *new_date,union stamp_combo *last,char *prompt);
word File_Get_Files(sword protocol, char *mname, char *path);
void File_Get_Upload_Names(void);
void Open_OpusXfer(FILE **xferinfo);
void Close_OpusXfer(FILE **xferinfo);
void Delete_OpusXfer(FILE **xferinfo);
void File_Contents(void);
void File_Titles(void);
void File_Tag(int dl_cmd);
long Index_of_Area(char *an);
word Write_LastUser(void);
int cdecl Inputf(char *dest,int type,int ch,int max,char *prompt, ...);
int cdecl Input_Charf(int type, char *extra, ...);
int cdecl GetListAnswer(char *list,char *help_file,char *invalid_response,int type,char *o_prompt,...);
int cdecl InputGets(char *dest, char *prompt, ...);
int cdecl InputGetsM(char *dest, int max, char *prompt, ...);
int cdecl InputGetsWNH(char *dest, char *prompt, ...);
int cdecl InputGetse(char *dest, char ch, char *prompt, ...);
int cdecl InputGetseNH(char *dest, char ch, char *prompt, ...);
int cdecl InputGetsC(char *dest, char ch, char *prompt, ...);
int cdecl InputGetsL(char *dest, int max, char *prompt, ...);
int cdecl InputGetsNH(char *dest, int max, char *prompt, ...);
int cdecl InputGetsLe(char *dest, int max, char ch, char *prompt, ...);
int cdecl InputGetsLLe(char *dest, int max, char ch, char *prompt, ...);
int cdecl InputGetsLL(char *dest, int max, char *prompt, ...);
int Mdm_getcw(void) /* Get a character from either the modem or console, depending */;
int Mdm_kpeek(void) /* Check for a character from either the keyboard or the modem */;
int Mdm_kpeek_tic(word tics); /* Check, but wait for elapsed time if nothing pressed */
void Parse_Local(int ch)   /* Parses keystrokes from the local console */;
void Keyboard_Off(void);
void Mdm_check(void)    /* Check for carrier loss, time limit, etc. */;
void Mdm_flush(void);
void Mdm_flush_tic(int tics);
int Mdm_flush_ck(void);
word Mdm_flush_ck_tic(word tics, word checkcc, word checkcar);
byte MoreYn(void);
byte MoreYnns(void);
void Check_Time_Limit(unsigned long *input_timeout,int *timer2);
void Priv_Up(void);
void Priv_Down(void);
void Msg_Xport(void);
void Msg_Upload(void);
void Login(char *);
void Validate_Runtime_Settings(void);
int Bad_Word_Check(char *username);
void Get_Pwd(void);
int _stdc Printf(char *format,...);
int _stdc Lprintf(char *format,...);
int _stdc Mdm_printf(char *format,...);
void Putc(int ch);
void Lputc(int ch);
void Puts(char *s);
void Lputs(char *s);
void Mdm_puts(char *s);
void Lputc(int ch);
void Mdm_putc(int ch);
int NetList(void);
int NodeList(word zone,word net_number);
void Msg_Inquire(char *menuname);
int Msg_Change(void);
void Blank_Msg(XMSG *msg);
void Add_Message_Date(XMSG *msg);
int Msg_Reply(void);
int Msg_ReplyArea(char *areaname);
void Scan_For_Intl_And_Fmpt(int msgfile,int *m_zone,int *m_net,int *m_node,int *m_point,char *str_msgid,char *str_fmpt,int intl_num);
int Editor(XMSG *msg, HMSG msgh, long msgnum, char *ctrl_buf, struct _replyp *pr);
void Quote_Up(void);
int Display_Options(char *name,XMSG *msg);
int Msg_Next(long startmsg);
int Msg_Previous(long startmsg);
int Msg_Nonstop(void);
int Msg_Read_Reply(void);
int Msg_Read_Original(void);
int Msg_Read_Individual(int ch);
int Goodbye_Comment(void);
void Press_ENTER_Read(void);
sword Last_Msg_Overlay(void);
long verylongtime(struct _stamp *sc);
long verylongtime(struct _stamp *sc);
int Bored(XMSG *msg,HMSG msgh, struct _replyp *pr);
word Local_Editor(XMSG *msg, HMSG msgh, long msgnum, char *ctrl_buf, struct _replyp *pr);
int Msg_Area(void);
void Recd_Msg(HMSG msgh, XMSG *msg, word set_recd);

int MsgToUs(NETADDR *d);
int Msg_Display(HMSG msgh,XMSG *msg,int pause,char *areano,long msgnum,int offset,char *ctrl, int inbrowse);
void Fix_Lastread(void);
int ReadNode(NETADDR *d,void *nodeptr);
int SaveMsg(XMSG *msg, FILE *upfile, int local_msg,
            long msgnum, int chg, PMAH pmah, char *msgarea,
            HAREA marea, char *ctrl_buf, char *orig_area,
            int fSkipCC);
int GetMsgAttr(XMSG *msg, PMAH pmah, char *msgname, long mn, long highmsg);
void Graphics_Draw_Everything(XMSG *msg);
void GenerateOriginLine(char *text, PMAH pmah);
int Msg_Enter_Get_Pvt(XMSG *msg);
void Toggle_Yell_Noise(void);
int move_file(char *fromfile,char *tofile);
int copy_file(char *fromfile,char *tofile);
void Lost_Carrier(void)  /* This is what we run if a user drops carrier */;
void PleaseRespond(void);
void Time5Left(void) /* Only 5 min. left */;
void TimeAlmostUp(void)  /* Time limit almost used up (2 mins) */;
void TimeLimit(void)   /* User overrran time limit! */;
void ChatMode(void);
void Parse_FKey(int c);
void Xpire_Date(void);
void Xpire_Time(void);
void Xpire_Demote(void);
int Outside(char *leaving,char *returning,int method,char *parm,
                   int display_slogan,int ctltype,char restart_type,
                   char *restart_name);
void Read_External_Log(int ctltype,char *parm,long starttime,int method);
void Close_Chatlog(void);
void Write_Restart(char restart_type, char *restart_name, long restart_offset, int usrtime, int ctltype, char *parm, long starttime, struct _css *css, char *returning);
void User_Edit(char *search);
char * Show_Pwd(char *pwd,char *ret,char echo);
void Area_Edit(void);
void Draw_Area_Screen(void);
void Draw_Area(void);
void Oracle_Parse_Args(char *ctlname,int argc,char *argv[]);
void Oracle(void);
int WFK(int needed);
void Zoquo(void);
int Msg_Enter(void);
int IsInUserList(char *name,int show_us);
int CheckCredit(NETADDR *dest, PMAH pmah);
int MagnEt(XMSG *msg,HMSG msgh,struct _replyp *pr);
void Redraw_Text(void);
void Redraw_StatusLine(void);
void Redraw_Quote(void);
void Parse_Initials(char *msgfrom,char *initials);
void Msg_Checkmail(char *menuname);
void Msg_Scan(char *menuname);
int Msg_List(char *menuname);
void Msg_Kill(long n);
int cdecl mbputsf(char *fmt,...);
int cdecl mbputs(char *str,int action);
int cdecl fbputs(char *str,int action);
void Msg_Forward(struct _fwdp *fp);
void Msg_Hurl(void);
int File_Area(void);
void File_Download(char *mname);
void File_Upload(char *mname);
int File_Get_Protocol(sword *protocol, int chng, int need_nonerl);
word File_Send_Files(sword protocol, char *mname, char *newuppath, int flag);
word File_Send_Files_Sub(sword protocol, char *mname, char *newuppath, long realbytes, int flag);
char * Protocol_Name(sword protocol,char *temp);
long XferTime(sword protocol,long bytes);
void File_IsOffline(char *filename);
void File_NotExist(char *filename);
void File_Area_Tag(void);
void File_Type(void);
word File_Okay(char *filename);
void Dont_Use_Wildcards(char *name);
void Strip_Path(char *filename);
void Add_To_Upload_Log(char *path,char *fname,long bytes);
char *zalloc(void);
void ListFileAreas(char *div_name, int show_help);
void File_Kill(void);
void File_Locate(void);
int DispMoreYnBreak(char *nonstop,char *colour,int type);
void cdecl LocalMsg(char *fmt,...);
void _fast vbuf_flush(void);
void _stdc DoWinPutc(int ch);
void _stdc DoWinPuts(char *s);
void Update_Scanfile(int mode,int msgnum,int scanfile);
void ScanLastreadPointer(dword *lastmsg);
char * MsgDate(XMSG *msg,char *datebuf);
void Fix_RLE(char *s);
sword IsBatch(sword protocol);
int IsInFilesBbs(PFAH pfah, char *filename, word *flag, char *path);
void Msg_Tag(void);
void Wait_For_Caller(void);
char *s_ret(word strn);
char *s_reth(char *hname, word strn);
void Initialize_Languages(void);
void Set_Lang_Alternate(int usealt);
void WFC_Idle(void);
void WFC_LogMsg(char *s);
int Get_Language(void);
void Chg_Language(void);
void Msg_Tag(void);
int Language_Save_Heap(void);
void Language_Restore_Heap(int h);
void ShutDownVideo(void);
long Idx_of_Area(char *an,int ret_idx_ofs);
int Msg_Browse(word newb, SEARCH *newfirst, char *menuname);
byte Get_Protocol_Letter(sword protocol);
char *SetAreaName(char *usr,char *newarea);
char *Graphics_Mode(byte video);
int Msg_Current(void);
void Init_Search(SEARCH *s);
int CanKillMsg(XMSG *msg);
byte * _fast Address(NETADDR *a);
char * MsgDte(union stamp_combo *st,char *datebuf);
void DrawReaderScreen(PMAH pmah, int inbrowse);
int Get_FidoList_Name(XMSG *msg,char *netnode,char *fidouser);
void Xpired(int reason);
char * FileDateFormat(union stamp_combo *sc,char *temp);
void Switch_To_Language(void);
int DoEditKey(int type,char *str,int key,int c);
word ToOrFromUs(XMSG *msg);
int Msg_Edit_User(void);
void Show_Time_In_Corner(void);
word MsgToThisUser(char *s);
void SetUserName(struct _usr *user,char *uesrname);
byte Get_Archiver(void);
void Load_Archivers(void);
word Alloc_Outline(byte *outline[]);
void Dealloc_Outline(byte *outline[]);
int GetGraphicsHeader(XMSG *msg,PMAH pmah,char *mname,long mn, long highmsg);
int GetTTYHeader(XMSG *msg,PMAH pmah,char *mname,long mn, long highmsg);
byte Assign_Unique_Task(void);
void Config_Multitasker(int log_it);
int File_Get_Download_Names(int do_tag,sword protocol);
int Match_Wildcard(char *filename,char *patstem,char *patext);
word Shall_We_Continue(word timeout, char *do_what);
struct _arcinfo * UserAri(byte num);
char * GenerateMessageKludges(XMSG *msg, PMAH pmah, char *ctrl_buf);
void QWK_Upload(void);
int Make_QWK_Directory(void);
void Clean_QWK_Directory(int rdir);
void AlwaysWhiteN(void);
int BbsRunOpt(option opt_num,char *arg);
int AreaIsReadOnly(PMAH pmah);
int MsgBodyToFile(HMSG msgh, FILE *out, int quote, int chng, byte *initials, word flag);
word QuoteThisLine(char *txt);
word ShowBody(HMSG msgh, word (*handle)(byte *txt,void *info,word lt), void *info, word norm_margin, word quote_margin, word flag);
word halt(void);
void far cdecl GetKey(char far *info);
void _fast Adjust_User_Record(struct _usr *user);
word MatchWC(char *pat,char *fn);
word File_Okay(char *filename);
sword ShowFileEntry(word *type, char *nstop, word isoffline, SCOMBO *pscFile, SCOMBO *pscUl, byte *filename, long size, int ck_abort, byte *desc, byte *descwork, PFAH pfah);
void Fix_MagnEt(void);
word CharsetSwedish(byte *str, byte *ch);
word CharsetChinese(byte *str, byte *ch);
void LanguageCleanup(void);
word LookForVirus(char *path, char *name);
void ChatAPB(char *msg);
int _stdc yellchk(void);
int _stdc wait_for_it(void);
word WroteMessage(PMAH pmah, XMSG *msg, char *kludges, HAREA ha, int chg);
void FixLastread(HAREA lsq, word type, dword lastmsg, char *path);
void FixPrivateStatus(XMSG *msg, PMAH pmah);
void fossil_getxy(char *row, char *col);
void MaxSentFile(word fn, word log_it, long max_time);
word FindProtocol(sword protocol, struct _proto *pro);
void MaxWriteCtl(struct _proto *pro, word ul);
word MaxReadLog(struct _proto *pro, word doing_ul);
void File_Process_Uploads(long ul_start_time, sword protocol, char *path);
void ResetAttr(void);
word AreaTagged(char *name);
sword TagDeleteArea(char *name);
int CanAccessMsgCommand(PMAH pmah, option opt, char letter);
int CanAccessFileCommand(PFAH pfah, option opt, char letter, BARINFO *pbi);
void RemoveFilesDat(PFAH pfah, char *fname);
int MenuNeedMore(void);


void DebOutStart(void);
void DebOutGotChar(int c);
void DebOutSentChar(int c);

void OS2FAR * EXPENTRY max_palloc(size_t size);
void EXPENTRY max_pfree(void OS2FAR *ptr);
void OS2FAR * EXPENTRY max_repalloc(void OS2FAR *ptr, size_t size);

void far * EXPENTRY max_farpalloc(size_t size);
void EXPENTRY max_farpfree(void far *ptr);
void far * EXPENTRY max_farrepalloc(void far *ptr, size_t size);

void Msg_Toggle_Kludges(void);
void Msg_Unreceive(dword last_msg, HMSG hm);
void OS2Init(void);
void medinit(void);
char * fbgetsc(char *s,int n,FILE *fp,int *trimmed);
char * fbgets(char *s,int n,FILE *fp);
void Msg_Restrict(void);
void MaxSemTriggerWait(void);

void cant_open(char *fname);
int ChatOpenMCP(void);
void ChatCloseMCP(void);
int loc_getch(void);
int loc_peek(void);
void mcp_out_flush(void);
void SendVideoDump(void);
int PrivOK(char *acstest, unsigned use_real_priv);

HAREA MaxOpenArea(MAH *pmah);
int PopMsgArea(void);
int PopPushMsgAreaSt(PMAH pmah, BARINFO *pbi);
int PopPushMsgArea(char *name, BARINFO *pbi);
int PushMsgArea(char *name, BARINFO *pbi);
int ValidMsgArea(char *name, MAH *pmah, unsigned flags, BARINFO *pbi);
void MaxParseNN(char *netnode, NETADDR *pna);

int PopFileArea(void);
int PushFileArea(char *name, BARINFO *pbi);
int PopPushFileArea(char *name, BARINFO *pbi);
int ValidFileArea(char *name, FAH *pfah, unsigned flags, BARINFO *pbi);
int Mex(char *arg);
void AddToEchoToss(char *tag);
dword SZKeysToMask(char *pszKeys);
int GetBarPriv(char *barfile, int is_msg, PMAH pmah, PFAH pfah, BARINFO *pbi, int ext_only);
sword realpriv(void);
void EnterFileAreaBarricade(void);
void ExitFileAreaBarricade(void);
void EnterMsgAreaBarricade(void);
void ExitMsgAreaBarricade(void);
char *CurrentMenuName(void);
char *MessageSection(char *cur_area, char *szTmp);
void ListMsgAreas(char *div_name, int do_tag, int show_help);
char *FileSection(char *current, char *szTmp);
int CopyMsgArea(PMAH to, PMAH from);
int CopyFileArea(PFAH to, PFAH from);
int PopPushFileAreaSt(PFAH pfah, BARINFO *pbi);
void AreaError(int err);
int GetMsgNum(char *prompt, dword *pmsgnum);
void mcp_sleep(void);
int ShowKludgeLines(char *ctrl, int (*showfunc)(char*,void*,int), void *args, int inbrowse);
int BrowseWCMatch(char *wc, char *name);
void KickThreads(void);
void ForceGetMsgArea(void);
void ForceGetFileArea(void);
void CMDM_PPUTcw_safe(int ch);
void CreateDate(char *out, union stamp_combo *date);
sword GetNewDateDiscrete(union stamp_combo *new_date, union stamp_combo *last,
                         char *promptprefix, int *piOrigYear, int *piOrigMonth,
                         int *piOrigDay);
char * commaize(long ulNum, char *szBuf);
int MexStartupIntrin(char *pszFile, char *pszArgs, dword fFlag);
void EatNulAfterCr(void);
void Msg_AttachUpload(PMAH pmah, HAREA marea, XMSG *msg, UMSGID uid);
void Msg_AttachDownload(XMSG *pxmsg, char *szCtrl, int isnetmsg);
void Msg_AttachKill(XMSG *pxmsg, char *szCtrl, int isnetmsg);
int Msg_AttachedFiles(void);
int Msg_UnreceivedAttach(XMSG *pxmsg, char * szCtrl, int isnetmsg);
int Make_Clean_Directory(char *szDirName);
void Clean_Directory(char *szDirName,int rdir);
int Ask_KillAttach(void);
void Msg_Attach_Download(void);
int AllowAttribute(PMAH pmah, int i);

int LocalKeystate();
int SetLocalKeystate(int setto);

int Mdm_WasLocalKey(void);

int RIP_SendFile(char *pszFile, int fDisplay);
int RIP_HasFile(char *pszFile, long *plFilesize);

int TermWidth();
int TermLength();
void SetTermSize( int cols, int rows );
#define ResetTermSize() SetTermSize(0,0)
void SetRipFont(int ifontno);
void SetRipOrigin(int ix, int iy);
void SetRipWrap(int iwrap);
void SetRipFont(int ifontno);
int RipOriginX(void);
int RipOriginY(void);
void RipReset(void);

int autodetect_ansi(void);
int autodetect_rip(void);
int save_tag_list(char *pszFname);
int restore_tag_list(char *pszFname, int fNoDelete);
int ValidClassIndex(int idx);
char *ClassAbbrev(int idx);
char *ClassDesc(int idx);
char *ClassFile(int idx);
char *ClassAlias(int idx);
char *ClassAbbrev(int idx);
char *ClassFile(int idx);
char *ClassAlias(int idx);
void EventListFree(void);
void InputAllocStr(void);
void InputFreeStr(void);
void OutputAllocStr(void);
void OutputFreeStr(void);
void GetLocalSize();
int Bored_Menu(XMSG *msg);
void RipClear();
char * _fast stristr_nochin(char *string,char *search);
int PushFileAreaSt(PFAH pfah, BARINFO *pbi);
int PushMsgAreaSt(PMAH pmah, BARINFO *pbi);
int maximus_atexit( register void ( *func )( void ) );
void maximus_exit(int status);


cpp_end()

