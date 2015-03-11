CXX=g++
CPPFLAGS=-std=c++11 

FNAME=lambda-func

SRC=$(FNAME).cpp 
TARGET=$(FNAME).out

OBJS = $(FNAME).o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(TARGET)

clean:
	-rm *.o
	-rm *.out