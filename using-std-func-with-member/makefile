CXX = g++
CXXFLAGS = -Wall -std=c++11

SRC = main.cpp animal.cpp
OBJ = $(SRC:.cpp=.o)

TARGET=demo.out

all: $(TARGET) $(SRC) animal.h

$(TARGET): $(OBJ) animal.h
	$(CXX) -o $(TARGET) $(OBJ)

$(OBJ): animal.h

clean:
	-rm $(OBJ) $(TARGET)