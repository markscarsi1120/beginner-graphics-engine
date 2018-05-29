#include <string>
#include <vector>
#include <iostream>
#include "camera.h"
using namespace std;
int main(int argc,char *argv[] )
   {
   Camera cam(10);
   Point point1(0,0,10);
   Point point2(10,0,10);
   Point point3(0,0,0);
   Point point4(10,0,0);
   Point point5(5,20,5);
   Line line1(point1,point2);
   Line line2(point1,point3);
   Line line3(point2,point4);
   Line line4(point3,point4);
   Line line5(point1,point5);
   Line line6(point2,point5);
   Line line7(point3,point5);
   Line line8(point4,point5);
   cam.setX(0,100);
   cam.setY(0,100);
   cam.setZ(0,100);
   cam.addNewElement(line1);
   cam.addNewElement(line2);
   cam.addNewElement(line3);
   cam.addNewElement(line4);
   cam.addNewElement(line5);
   cam.addNewElement(line6);
   cam.addNewElement(line7);
   cam.addNewElement(line8);
   cam.printLineArray();
   cam.shift(0,0);
   return 0;
   }