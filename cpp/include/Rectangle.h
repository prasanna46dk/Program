#ifndef RECTANGLE_H
#define RECTANGLE_H
#include"Shape.h"
class Rectangle : public Shape
{
    public :
        Rectangle(
                  unsigned int width, 
                  unsigned int height
                  );
        ~Rectangle();
};
#endif 
