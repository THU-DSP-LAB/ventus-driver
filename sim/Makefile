DESTDIR ?= .
RTL_DIR = ../obj_dir
CXXFLAGS += -std=c++11 -Wall -Wextra -Wfatal-errors -Wno-array-bounds
CXXFLAGS += -fPIC -Wno-maybe-uninitialized
CXXFLAGS += -I../common -I./common


SRCS = ../common/util.cpp ../common/mem.cpp ../common/rvfloats.cpp
SRCS += $(DPI_DIR)/util_dpi.cpp $(DPI_DIR)/float_dpi.cpp
SRCS += processor.cpp

ifdef AXI_BUS
	TOP = Vortex_axi
	CXXFLAGS += -DAXI_BUS
else
	TOP = Vortex
endif