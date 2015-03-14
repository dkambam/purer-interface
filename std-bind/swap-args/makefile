CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRC = swap-args.cpp
OBJ = $(SRC:.cpp=.o)

TARGET = swap-args.out

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

clean:
	-rm $(TARGET) $(OBJ)