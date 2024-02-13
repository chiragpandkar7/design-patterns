#ifndef SHAPE_FACTORY_H
#define SHAPE_FACTORY_H
#include "Circle.h"
#include "Square.h"
#include<string>

class ShapeFactory
{
    public:
        static Circle getCirle(double radius);
        static Square getSquare(double side);
        static std::string type;
};

#endif