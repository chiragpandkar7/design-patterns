#ifndef SQUARE_H
#define SQUARE_H

#include "Shape2D.h"

class Square : public Shape2D
{
    public:
        static Square make(double);
        double side();

    private:
        Square(double);
        double mSide;
};



#endif