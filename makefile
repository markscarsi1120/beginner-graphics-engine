
CXX = g++
CXXFLAGS = -Wall -g


engineDriver: engineDriver.o vector.o point.o line.o camera.o 
	$(CXX) $(CXXFLAGS) -o engineDriver engineDriver.o point.o vector.o line.o camera.o

engineDriver.o: engineDriver.cpp point.h vector.h line.h camera.h
	$(CXX) $(CXXFLAGS) -c engineDriver.cpp

camera.o: vector.h point.h line.h camera.h

line.o: vector.h point.h line.h

point.o: vector.h point.h

vector.o: vector.h

#rm engineDriver *.o
#make
#/engineDriver