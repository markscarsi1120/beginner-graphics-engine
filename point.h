#include <string>
#include <vector>
#include <iostream>
#include "vector.h"
using namespace std;
class Point
   {
   public:
      Point(double x,double y,double z);
      Point();
      void addVectorToPoint(Vector addVec);
	   void subtractVectorFromPoint(Vector subVec);
      double* getPoint();
      double* getTwoD();
	   Vector subtractPointFromPoint(Point subPoint);
   private:
      double tuplePoint[3];
      double tuple2DPoint[2];
   };