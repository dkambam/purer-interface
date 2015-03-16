CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRC = bind-functors.cpp
OBJ = $(SRC:.cpp=.o)

TARGET = bind-functors.out

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

clean:
	-rm $(OBJ) $(TARGET) 

