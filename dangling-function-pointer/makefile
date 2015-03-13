CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRC1 = dangling-function-pointer.cpp
SRC2 = unassigned-std-function.cpp

OBJ1 = $(SRC1:.cpp=.o)
OBJ2 = $(SRC2:.cpp=.o)

TARGET1 = $(SRC1:.cpp=.out)
TARGET2 = $(SRC2:.cpp=.out)

# HEADER = $(SRC:.cpp=.h)

all: $(TARGET1) $(TARGET2)

$(TARGET1): $(OBJ1) $(HEADER1)
	$(CXX) $(CXXFLAGS) -o $(TARGET1) $(OBJ1)

$(TARGET2): $(OBJ2) $(HEADER2)
	$(CXX) $(CXXFLAGS) -o $(TARGET2) $(OBJ2)

clean:
	-rm $(OBJ1) $(TARGET1)
	-rm $(OBJ2) $(TARGET2)

rebuild: clean all
