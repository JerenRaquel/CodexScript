WFLAGS := -Wall -Werror
WNO_FLAGS := -Wno-unused-variable -Wno-unused-function -Wno-pointer-arith

GXXVERSION := g++-10
GXX := $(GXXVERSION) -std=c++2a -pthread $(WFLAGS) $(WNO_FLAGS)
GXXG := $(GXX) -g

SRC_DIR := src
HEADER_DIR := $(SRC_DIR)/headers
SOURCE_DIR := $(SRC_DIR)/impl

HEADERS := $(HEADER_DIR)/*.hpp
SOURCES := $(SOURCE_DIR)/*.cpp
MAIN := $(SRC_DIR)/main.cpp
EXE := CXSCompiler.exe

all: $(MAIN) $(HEADERS) $(SOURCES) 
	$(GXX) $(MAIN) $(SOURCES) -o $(EXE)

debug: $(MAIN) $(SOURCES) $(HEADERS)
	$(GXXG) $(MAIN) $(SOURCES) -o $(EXE)

clean: $(EXE)
	rm -f $^
