SIM_DIR = ../sim

CXXFLAGS += -std=c++11 -Wall -Wextra -pedantic -Wfatal-errors

CXXFLAGS += -I../include -I../common  -I$(SIM_DIR) -I$(SIM_DIR)/../common

# Position independent code
CXXFLAGS += -fPIC

# Add external configuration
CXXFLAGS += $(CONFIGS)

LDFLAGS += -shared -pthread
LDFLAGS += -L. -lveridriver

SRCS = vortex.cpp ../common/vx_utils.cpp

# Debugigng
ifdef DEBUG
	CXXFLAGS += -g -O0
else
	CXXFLAGS += -O2 -DNDEBUG
endif

PROJECT = libventus.so

all: $(PROJECT)

$(PROJECT): $(SRCS)
	DESTDIR=../veridriver $(MAKE) -C $(SIM_DIR) ../veridriver/libveridriver.so
	$(CXX) $(CXXFLAGS) $(SRCS) $(LDFLAGS) -o $(PROJECT)

clean:
	DESTDIR=../veridriver $(MAKE) -C $(SIM_DIR) clean
	rm -rf $(PROJECT) *.o