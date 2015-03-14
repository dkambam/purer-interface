CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRC = bind-members.cpp
OBJ = $(SRC:.cpp=.o)

TARGET = bind-members.out

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

clean:
	-rm $(OBJ) $(TARGET) 

