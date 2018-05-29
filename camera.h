#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include "line.h"
using namespace std;
class Camera
   {
   public:
      Camera(int size);
      void setX(int min, int max);
	   void setY(int min, int max);
	   void setZ(int min, int max);
      void printLineArray();
      void addNewElement(Line liney);
      void shift(int x, int y);
   private:
      void updateLineArray();
      int size;
      int xMin;
      int xMax;
      int yMin;
      int yMax;
      int zMin;
      int zMax;
      Line* lineArray;
      vector<Point> allowed;
      int cameraCounter;
   };