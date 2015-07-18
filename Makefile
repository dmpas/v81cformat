#------------------------------------------------------------------------------#
# This makefile was generated by 'cbp2make' tool rev.147                       #
#------------------------------------------------------------------------------#


WORKDIR = `pwd`

CC = gcc
CXX = g++
AR = ar
LD = g++
WINDRES = 

INC = -I./src/
CFLAGS = -std=c++11 -Wall `pkg-config --cflags libxml++-2.6`
RESINC = 
LIBDIR = 
LIB = -lboost_system -lboost_filesystem
LDFLAGS = `pkg-config --libs libxml++-2.6`

INC_DEBUG = $(INC) -Iinclude
CFLAGS_DEBUG = $(CFLAGS) -g -DDEBUG
RESINC_DEBUG = $(RESINC)
RCFLAGS_DEBUG = $(RCFLAGS)
LIBDIR_DEBUG = $(LIBDIR)
LIB_DEBUG = $(LIB) 
LDFLAGS_DEBUG = $(LDFLAGS)
OBJDIR_DEBUG = obj/Debug
DEP_DEBUG = 
OUT_DEBUG = bin/Debug/v81cformat

INC_RELEASE = $(INC) -Iinclude
CFLAGS_RELEASE = $(CFLAGS) -O2
RESINC_RELEASE = $(RESINC)
RCFLAGS_RELEASE = $(RCFLAGS)
LIBDIR_RELEASE = $(LIBDIR)
LIB_RELEASE = $(LIB) 
LDFLAGS_RELEASE = $(LDFLAGS) -s
OBJDIR_RELEASE = obj/Release
DEP_RELEASE = 
OUT_RELEASE = bin/Release/v81cformat

OBJ_DEBUG = $(OBJDIR_DEBUG)/src/render/simple_html.o $(OBJDIR_DEBUG)/src/render/simple_string.o $(OBJDIR_DEBUG)/src/xml/enums.o $(OBJDIR_DEBUG)/src/xml/serializer.o $(OBJDIR_DEBUG)/main.o

OBJ_RELEASE = $(OBJDIR_RELEASE)/src/render/simple_html.o $(OBJDIR_RELEASE)/src/render/simple_string.o $(OBJDIR_RELEASE)/src/xml/enums.o $(OBJDIR_RELEASE)/src/xml/serializer.o $(OBJDIR_RELEASE)/main.o

all: debug release

clean: clean_debug clean_release

before_debug: 
	test -d bin/Debug || mkdir -p bin/Debug
	test -d $(OBJDIR_DEBUG)/src/render || mkdir -p $(OBJDIR_DEBUG)/src/render
	test -d $(OBJDIR_DEBUG)/src/xml || mkdir -p $(OBJDIR_DEBUG)/src/xml
	test -d $(OBJDIR_DEBUG) || mkdir -p $(OBJDIR_DEBUG)

after_debug: 

debug: before_debug out_debug after_debug

out_debug: before_debug $(OBJ_DEBUG) $(DEP_DEBUG)
	$(LD) $(LIBDIR_DEBUG) -o $(OUT_DEBUG) $(OBJ_DEBUG)  $(LDFLAGS_DEBUG) $(LIB_DEBUG)

$(OBJDIR_DEBUG)/src/render/simple_html.o: src/render/simple_html.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/render/simple_html.cpp -o $(OBJDIR_DEBUG)/src/render/simple_html.o

$(OBJDIR_DEBUG)/src/render/simple_string.o: src/render/simple_string.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/render/simple_string.cpp -o $(OBJDIR_DEBUG)/src/render/simple_string.o

$(OBJDIR_DEBUG)/src/xml/enums.o: src/xml/enums.cxx
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/xml/enums.cxx -o $(OBJDIR_DEBUG)/src/xml/enums.o

$(OBJDIR_DEBUG)/src/xml/serializer.o: src/xml/serializer.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c src/xml/serializer.cpp -o $(OBJDIR_DEBUG)/src/xml/serializer.o

$(OBJDIR_DEBUG)/main.o: main.cpp
	$(CXX) $(CFLAGS_DEBUG) $(INC_DEBUG) -c main.cpp -o $(OBJDIR_DEBUG)/main.o

clean_debug: 
	rm -f $(OBJ_DEBUG) $(OUT_DEBUG)
	rm -rf bin/Debug
	rm -rf $(OBJDIR_DEBUG)/src/render
	rm -rf $(OBJDIR_DEBUG)/src/xml
	rm -rf $(OBJDIR_DEBUG)

before_release: 
	test -d bin/Release || mkdir -p bin/Release
	test -d $(OBJDIR_RELEASE)/src/render || mkdir -p $(OBJDIR_RELEASE)/src/render
	test -d $(OBJDIR_RELEASE)/src/xml || mkdir -p $(OBJDIR_RELEASE)/src/xml
	test -d $(OBJDIR_RELEASE) || mkdir -p $(OBJDIR_RELEASE)

after_release: 

release: before_release out_release after_release

out_release: before_release $(OBJ_RELEASE) $(DEP_RELEASE)
	$(LD) $(LIBDIR_RELEASE) -o $(OUT_RELEASE) $(OBJ_RELEASE)  $(LDFLAGS_RELEASE) $(LIB_RELEASE)

$(OBJDIR_RELEASE)/src/render/simple_html.o: src/render/simple_html.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/render/simple_html.cpp -o $(OBJDIR_RELEASE)/src/render/simple_html.o

$(OBJDIR_RELEASE)/src/render/simple_string.o: src/render/simple_string.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/render/simple_string.cpp -o $(OBJDIR_RELEASE)/src/render/simple_string.o

$(OBJDIR_RELEASE)/src/xml/enums.o: src/xml/enums.cxx
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/xml/enums.cxx -o $(OBJDIR_RELEASE)/src/xml/enums.o

$(OBJDIR_RELEASE)/src/xml/serializer.o: src/xml/serializer.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c src/xml/serializer.cpp -o $(OBJDIR_RELEASE)/src/xml/serializer.o

$(OBJDIR_RELEASE)/main.o: main.cpp
	$(CXX) $(CFLAGS_RELEASE) $(INC_RELEASE) -c main.cpp -o $(OBJDIR_RELEASE)/main.o

clean_release: 
	rm -f $(OBJ_RELEASE) $(OUT_RELEASE)
	rm -rf bin/Release
	rm -rf $(OBJDIR_RELEASE)/src/render
	rm -rf $(OBJDIR_RELEASE)/src/xml
	rm -rf $(OBJDIR_RELEASE)

.PHONY: before_debug after_debug clean_debug before_release after_release clean_release
