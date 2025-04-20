CXX = g++
CXXFLAGS = -Wall -std=c++11

all: test

test: test.o matrix.o
	$(CXX) $(CXXFLAGS) -o test test.o matrix.o

test.o: test.cpp matrix.h
	$(CXX) $(CXXFLAGS) -c test.cpp

matrix.o: matrix.cpp matrix.h
	$(CXX) $(CXXFLAGS) -c matrix.cpp

clean:
	rm -f *.o test