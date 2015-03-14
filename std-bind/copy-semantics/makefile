CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRC = copy-semantics.cpp
OBJ = $(SRC:.cpp=.o)

TARGET = copy-semantics.out

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

clean:
	-rm $(OBJ) $(TARGET) 

