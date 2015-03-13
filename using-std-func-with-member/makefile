CXX = g++
CXXFLAGS = -Wall -std=c++11

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

TARGET=demo.out

all: $(TARGET) $(SRC) animal.h

$(TARGET): $(OBJ) animal.h
	$(CXX) -o $(TARGET) $(OBJ)

animal.h: animal.cpp

animal.cpp:

$(OBJ): animal.h

clean:
	-rm $(OBJ) $(TARGET)