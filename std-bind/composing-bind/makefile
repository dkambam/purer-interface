CXX = g++
CXXFLAGS = -Wall -std=c++11

SRC = composing-bind.cpp
OBJ = $(SRC:.cpp=.o)

TARGET = composing-bind.out

All: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

clean:
	-rm $(TARGET) $(OBJ)