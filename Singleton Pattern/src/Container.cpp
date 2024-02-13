#include "..\headers\Container.h"

Container* Container::getContainer()
{
    if(mContainer)
    {
        return mContainer;
    }
    else
    {
        mContainer = new Container;
        return mContainer;
    }
}

void Container::setValue(int x,int y)
{
    A = x;
    B = y;
}

int Container::addition()
{
    return A+B;
}

Container::Container()
{

}



