CXX = g++
CXXFLAGS = -Wall -std=c++17

TARGET = uno
SRC = $(wildcard *.cpp)

RM = rm -f

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET).exe

run: all
	./$(TARGET).exe

clean:
	$(RM) $(TARGET).exe