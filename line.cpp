#include "line.h"
#include <cmath> 
using namespace std;
Line::Line(Point initialA, Point initialB)
   {  
   a = initialA;
   b = initialB;
   }
Line::Line()
   {

   }
void Line::change(Point &a, Point &b, int index)
   {
   Point temp;
   if (b.getPoint()[index]>a.getPoint()[index])
      {
      temp = b;
      b = a;
      a = temp;
      }
   }
void Line::updateLine()
   {
   if(a.getPoint()[0]!=b.getPoint()[0])
      {
      change(a,b,0);
      Vector help;
      line.push_back(a);
      help = a.subtractPointFromPoint(b);
      for (int index = a.getPoint()[0]-1; index > b.getPoint()[0]; index = index-1)
         {
         double hold = (index-a.getPoint()[0])/(double)(help.getVec()[0]);
         double y = (help.getVec()[1]*hold)+a.getPoint()[1];
         double z = (help.getVec()[2]*hold)+a.getPoint()[2];
         Point ass(index,y,z);
         line.push_back(ass);
         }
      line.push_back(b);
      }
   if(a.getPoint()[1]!=b.getPoint()[1])
      {
      change(a,b,1);
      Vector help1;
      line.push_back(a);
      help1 = a.subtractPointFromPoint(b);
      for (int index = a.getPoint()[1]-1; index > b.getPoint()[1]; index = index-1)
         {
         double hold = (index-a.getPoint()[1])/(double)(help1.getVec()[1]);
         double x = (help1.getVec()[0]*hold)+a.getPoint()[0];
         double z = (help1.getVec()[2]*hold)+a.getPoint()[2];
         Point ass(x,index,z);
         line.push_back(ass);
         }
      line.push_back(b);
      }
   if(a.getPoint()[2]!=b.getPoint()[2])
      {
      change(a,b,2);
      Vector help2;
      line.push_back(b);
      help2 = a.subtractPointFromPoint(b);
      for (int index = a.getPoint()[2]-1; index > b.getPoint()[2]; index = index-1)
         {
         double hold = (index-a.getPoint()[2])/(double)(help2.getVec()[2]);
         double y = (help2.getVec()[1]*hold)+a.getPoint()[1];
         double x = (help2.getVec()[0]*hold)+a.getPoint()[0];
         Point ass(x,y,index);
         line.push_back(ass);
         }
      line.push_back(b);
      }
   }
vector <Point> Line::getLine()
   {
   return line;
   }
