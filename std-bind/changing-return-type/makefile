CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRC = change-rtype.cpp
OBJ = $(SRC:.cpp=.o)

TARGET = change-rtype.out

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

clean:
	-rm $(OBJ) $(TARGET) 

