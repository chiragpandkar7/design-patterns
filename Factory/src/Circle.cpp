#include "..\headers\Circle.h"

Circle :: Circle(double inRadius) : mRadius(inRadius)
{

}

Circle Circle::make(double inRadius)
{
    Circle circle(inRadius);
    return circle;
}

double Circle::radius()
{
    return mRadius;
}

