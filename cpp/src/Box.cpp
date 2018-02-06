#include"Box.h"

unsigned int 
Box::GetArea()
{   return (Height*Width); }

unsigned int 
Box::GetWidth()
{   return Width; }

unsigned int 
Box::GetHeight()
{   return Height; }

void 
Box::SetHeight(unsigned int value)
{   Height = value; }

void 
Box::SetWidth(unsigned int value)
{   Width = value; }


