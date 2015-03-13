CXX = g++
CXXFLAGS = -Wall -std=c++11

SRC = main.cpp stateful-functor.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = stateful-functor.h

TARGET=demo.out

all: $(TARGET) $(SRC) $(HEADER)

$(TARGET): $(OBJ) $(HEADER)
	$(CXX) -o $(TARGET) $(OBJ)

$(OBJ): $(HEADER)

clean:
	-rm $(OBJ) $(TARGET)