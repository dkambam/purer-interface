CXX=g++
CFLAGS=-std=c++11 

SRC=free-function.cpp 
TARGET=free-function.out

OBJS = free-function.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(TARGET)

clean:
	-rm *.o
	-rm *.out