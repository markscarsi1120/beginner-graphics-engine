#include "point.h"
using namespace std;
Point::Point(double x, double y, double z)
   {
   tuplePoint[0]=x;
   tuplePoint[1]=y;
   tuplePoint[2]=z;
   }
Point::Point()
   {

   }
double* Point::getPoint()
   {
   return tuplePoint;
   }
double* Point::getTwoD()
   {
   return tuple2DPoint;
   }
void Point::addVectorToPoint(Vector addVec)
   {
   tuplePoint[0]=tuplePoint[0]+addVec.getVec()[0];
   tuplePoint[1]=tuplePoint[1]+addVec.getVec()[1];
   tuplePoint[2]=tuplePoint[2]+addVec.getVec()[2];
   }
void Point::subtractVectorFromPoint(Vector subVec)
   {
   tuplePoint[0]=tuplePoint[0]-subVec.getVec()[0];
   tuplePoint[1]=tuplePoint[1]-subVec.getVec()[1];
   tuplePoint[2]=tuplePoint[2]-subVec.getVec()[2];
   }
Vector Point::subtractPointFromPoint(Point subPoint)
   {
   double x = tuplePoint[0]-subPoint.getPoint()[0];
   double y = tuplePoint[1]-subPoint.getPoint()[1];
   double z = tuplePoint[2]-subPoint.getPoint()[2];
   Vector vecty(x,y,z);
   return vecty;
   }
