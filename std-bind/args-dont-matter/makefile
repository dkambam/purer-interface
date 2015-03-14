CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRC = args-dont-matter.cpp
OBJ = $(SRC:.cpp=.o)

TARGET = args-dont-matter.out

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

clean:
	-rm $(OBJ) $(TARGET) 

