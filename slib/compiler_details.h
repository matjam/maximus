#include <endian.h>
#undef LITTLE_ENDIAN
#undef BIG_ENDIAN

#if __BYTE_ORDER == __LITTLE_ENDIAN
#define LITTLE_ENDIAN
#elif __BYTE_ORDER == __BIG_ENDIAN
#define BIG_ENDIAN
#else
#error "Couldn't find endianess"
#endif
