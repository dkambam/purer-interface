CXX=g++
CPPFLAGS=-std=c++11 

FNAME=member-func-callback

SRC=$(FNAME).cpp 
TARGET=$(FNAME).out

OBJS = $(FNAME).o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(TARGET)

clean:
	-rm *.o
	-rm *.out