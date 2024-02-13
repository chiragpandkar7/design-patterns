#include "..\headers\Square.h"

Square :: Square(double inSide) : mSide(inSide)
{
    
}

Square Square::make(double inSide)
{
    Square square(inSide);
    return square;
}

double Square::side()
{
    return mSide;
}

