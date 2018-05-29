#include <string>
#include <vector>
#include <iostream>
#include <vector>
#include "point.h"
using namespace std;
class Line
   {
   public:
      Line(Point a, Point b);
      Line();
      vector <Point> getLine();
      void updateLine();
      void change(Point &a, Point &b, int index);
   private:
      vector<Point> line;
      Point a;
      Point b;
   };