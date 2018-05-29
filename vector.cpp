#include "vector.h"
#include <cmath>
using namespace std;
Vector::Vector(double x, double y, double z)
   {
   tupleVec[0]=x;
   tupleVec[1]=y;
   tupleVec[2]=z;
   }
Vector::Vector()
   {
   	
   }
double* Vector::getVec()
   {
   return tupleVec;
   }
void Vector::addVectorToVector(Vector addVec)
   {
   tupleVec[0]=tupleVec[0]+addVec.getVec()[0];
   tupleVec[1]=tupleVec[1]+addVec.getVec()[1];
   tupleVec[2]=tupleVec[2]+addVec.getVec()[2];
   }
void Vector::subtractVectorFromVector(Vector subVec)
   {
   tupleVec[0]=tupleVec[0]-subVec.getVec()[0];
   tupleVec[1]=tupleVec[1]-subVec.getVec()[1];
   tupleVec[2]=tupleVec[2]-subVec.getVec()[2];
   }
void Vector::xyRotation(double degrees)
   {
   double radians = (3.14159265*degrees)/180;
   double a0 = tupleVec[0];
   double a1 = tupleVec[1];
   double a2 = tupleVec[2];
   tupleVec[0]= (cos(radians)*a0)+(-1*sin(radians)*a1);
   tupleVec[1]= (sin(radians)*a0)+(cos(radians)*a1);
   tupleVec[2]= a2;
   }
void Vector::xzRotation(double degrees)
   {
   double radians = (3.14159265*degrees)/180;
   double a0 = tupleVec[0];
   double a1 = tupleVec[1];
   double a2 = tupleVec[2];
   tupleVec[0]= (cos(radians)*a0)+(sin(radians)*a2);
   tupleVec[1]= a1;
   tupleVec[2]= (-1*sin(radians)*a0)+(cos(radians)*a2);
   }
void Vector::yzRotation(double degrees)
   {
   double radians = (3.14159265*degrees)/180;
   double a0 = tupleVec[0];
   double a1 = tupleVec[1];
   double a2 = tupleVec[2];
   tupleVec[0]= a0;
   tupleVec[1]= (cos(radians)*a1)+(-1*sin(radians)*a2);
   tupleVec[2]= (sin(radians)*a1)+(cos(radians)*a2);
   }
void Vector::scale(double x, double y, double z)
   {
   tupleVec[0]=tupleVec[0]*x;
   tupleVec[1]=tupleVec[1]*y;
   tupleVec[2]=tupleVec[2]*z;
   }

