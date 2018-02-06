#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>

using namespace std;

class Shape 
{
    public :
        Shape(
              unsigned int width, 
              unsigned int height
             );
        ~Shape();
        unsigned int GetHeight();
        unsigned int GetWidth();
        unsigned int GetArea();
    protected :
        //defining data members of class as protected because private member of class cannot be inherited by 
        //derived class 
        unsigned int Width;
        unsigned int Height;        
};

#endif
