CXX=g++
CPPFLAGS=-std=c++11 -Wall

SRC=main.cpp amazing-adder.cpp
TARGET=amazing-adder.out

OBJS = main.o amazing-adder.o

all: $(TARGET)

$(TARGET): $(OBJS) amazing-adder.h
	$(CXX) $(CFLAGS) $(OBJS) -o $(TARGET)

clean:
	-rm $(OBJS)
	-rm $(TARGET)