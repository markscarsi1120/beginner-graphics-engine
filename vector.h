#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Vector
   {
   public:
      Vector(double x, double y, double z);
      Vector();
      double* getVec();
      void addVectorToVector(Vector addVec);
	  void subtractVectorFromVector(Vector subVec);
	  void xyRotation(double degrees);
	  void xzRotation(double degrees);
	  void yzRotation(double degrees);
	  void scale(double x, double y, double z);
   private:
      double tupleVec[3];
   };