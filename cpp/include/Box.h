#ifndef BOX_H
#define BOX_H
class Box {
    public :
        unsigned int 
            GetWidth();
        unsigned int 
            GetHeight();
        unsigned int 
            GetArea();
        /*unsigned int 
            GetLength();
        unsigned int 
            GetVolume();
        void 
            SetLength(unsigned int value);
            */
        void 
            SetHeight(unsigned int value);
        void 
            SetWidth(unsigned int value);
    private :
        unsigned int Height;
        unsigned int Width;
        //unsigned int Length;
};
#endif 
