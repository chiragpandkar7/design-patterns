#include "../headers/ShapeFactory.h"

Circle ShapeFactory::getCirle(double inRadius)
{
    Circle circle = Circle::make(inRadius);
    return circle;
}

Square ShapeFactory::getSquare(double inSide)
{
    Square square = Square::make(inSide);
    return square;
}