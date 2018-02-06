#include"Shape.h"

Shape::Shape(unsigned int width, unsigned int height)
{
    Width = width;
    Height = height;
}

Shape::~Shape()
{   
    return;
}

unsigned int 
Shape::GetArea()
{
    return Width*Height;
}

unsigned int 
Shape::GetHeight()
{
    return Height;
}

unsigned int 
Shape::GetWidth()
{
    return Width;
}
