#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape2D.h"

class Circle : public Shape2D
{
    public:
        static Circle make(double);
        double radius();


    private:
        Circle(double);
        double mRadius;
};

#endif