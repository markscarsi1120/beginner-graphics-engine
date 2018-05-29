#include "camera.h"
using namespace std;
Camera::Camera(int initialSize)
   {
   size = initialSize;
   lineArray = new Line[size];
   cameraCounter=0;
   }
void Camera::setX(int min, int max)
   {
   xMin = min;
   xMax = max;
   }
void Camera::setY(int min, int max)
   {
   yMin = min;
   yMax = max;
   }
void Camera::setZ(int min, int max)
   {
   zMin = min;
   zMax = max;
   }
void Camera::addNewElement(Line liney)
   {
   lineArray[cameraCounter] = liney;
   cameraCounter++;
   }
void Camera::updateLineArray()
   {
   for(int index = 0; index < cameraCounter; index++)
      {
      lineArray[index].updateLine();
      for(unsigned int inner = 0; inner < lineArray[index].getLine().size();inner++)
         {
         if(lineArray[index].getLine()[inner].getPoint()[0] >= xMin &&
         	lineArray[index].getLine()[inner].getPoint()[0] <= xMax &&
         	lineArray[index].getLine()[inner].getPoint()[1] >= yMin &&
         	lineArray[index].getLine()[inner].getPoint()[1] <= yMax &&
         	lineArray[index].getLine()[inner].getPoint()[2] >= zMin &&
         	lineArray[index].getLine()[inner].getPoint()[2] <= zMax)
            {
            allowed.push_back(lineArray[index].getLine()[inner]);
            }
         }
      }
   }
void Camera::printLineArray()
   {
   updateLineArray();
   ofstream myfile("output.txt");
   for( unsigned index = 0; index < allowed.size(); index++)
      {
      myfile << allowed[index].getPoint()[0] << "," <<
                allowed[index].getPoint()[1] << "," << 
                allowed[index].getPoint()[2] << "\t";
      }
   }
void Camera::shift(int x, int y)
   {
   for( unsigned index = 0; index < allowed.size(); index++)
      {
      if (allowed[index].getPoint()[2]!=0)
         {
         allowed[index].getTwoD()[0]=
         x*(allowed[index].getPoint()[0]/allowed[index].getPoint()[2])+
         allowed[index].getPoint()[0];
         allowed[index].getTwoD()[1]=
         y*(allowed[index].getPoint()[1]/allowed[index].getPoint()[2])+
         allowed[index].getPoint()[1];
         }
      else
         {
         allowed[index].getTwoD()[0]=allowed[index].getPoint()[0];
         allowed[index].getTwoD()[1]=allowed[index].getPoint()[1];
         }
      cout << allowed[index].getTwoD()[0] << ", " 
           << allowed[index].getTwoD()[1] << endl;
      }
   }
