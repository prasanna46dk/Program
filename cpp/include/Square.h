#ifndef SQUARE_H
#define SQUARE_H
#include"Rectangle.h"
class Square : public Rectangle
{
    public :
        Square(
                unsigned int side,
              );
        ~Square();
};
#endif
