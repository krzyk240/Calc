CXX = g++
ARCH = 64
CXXFLAGS = -s -O3 -Wall -m$(ARCH)
LDFLAGS = $(CXXFLAGS)
RM = rm -f