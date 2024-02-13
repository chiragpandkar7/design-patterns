#include<iostream>
#include "headers\ShapeFactory.h"

int main()
{
    Circle circle = ShapeFactory :: getCirle(5);
    std::cout << "Circle with radius : " << circle.radius() << std::endl;

    Square square = ShapeFactory :: getSquare(4);
    std::cout<< "Square with side : " << square.side() << std::endl;

    return 0;
}