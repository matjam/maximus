# Set up the variances between the different build modes

CPP = $(CC) -E
LD  := $(LD) -shared
MDFLAGS += -D__GNUC__
CFLAGS += -funsigned-bitfields -Wcast-align

ifeq ($(WORDSIZE),32)
CFLAGS += -m32
CXXFLAGS += -m32
LDFLAGS += -m32
endif

BUILD:=$(strip $(BUILD))

ifeq ($(BUILD),PROFILE)
  CFLAGS	+= -O2 -pg
  LDFLAGS	+= -L$(STATIC_LIB) -static
  LIB_EXT	:= a
else
  LDFLAGS	+= -L$(LIB) -Xlinker -R$(LIB) $(foreach DIR, $(EXTRA_LD_LIBRARY_PATH), -Xlinker -R$(DIR))
  __LOADLIBES	:= $(LOADLIBES)
  LOADLIBES     = -Wl,--start-group $(EXTRA_LOADLIBES) $(__LOADLIBES) -Wl,--end-group
  LIB_EXT	:= so
endif

ifeq ($(BUILD),RELEASE)
  CFLAGS	+= -O2
endif

ifeq ($(BUILD),DEVEL)
  DEBUGMODE	= 1
  CFLAGS	+= -g -Wall -O $(DEBUG_CFLAGS)
  YFLAGS	+= -t
endif

ifeq ($(BUILD),DEBUG)
  CFLAGS	+= -g -Wall $(DEBUG_CFLAGS)
  YFLAGS	+= -t
endif

# Define some implicit (pattern) rules

%.a:
	$(AR) -ru $@ $?
	$(RANLIB) $@

%.so:
	$(LD) $(LDFLAGS) $^ -o $@

%.CPP: %.c
	$(CPP) $(CFLAGS) $(CPPFLAGS) $< > $@
