#include<iostream>
#include<cstdlib>
#include"Rectangle.h"
using namespace std;
int main(int argc, char *argv[])
{
    if (3 > argc){
        cout << "./main <height> <width>" << endl;
        exit(1);
    }
    Rectangle rect(atoi(argv[1]), atoi(argv[2]));
    cout << "Area of Rectangle: " << rect.GetArea() << endl;
}
