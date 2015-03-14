CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRC = std-bind.cpp
OBJ = $(SRC:.cpp=.o)

TARGET = bind.out

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

clean:
	-rm $(TARGET) $(OBJ)