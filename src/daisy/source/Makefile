# Project Name
TARGET = HeavyDaisy_Untitled

# Library Locations
LIBDAISY_DIR = ../../libdaisy

LDSCRIPT = ../../libdaisy/core/STM32H750IB_sram.lds

APP_TYPE = BOOT_SRAM


# Project Source
C_SOURCES = $(wildcard *.c)
CPP_SOURCES = $(wildcard *.cpp)

# Core location, and generic makefile.
SYSTEM_FILES_DIR = $(LIBDAISY_DIR)/core
include $(SYSTEM_FILES_DIR)/Makefile

CFLAGS += -DHV_BARE_METAL