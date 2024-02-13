#ifndef CAR_FACADE_H
#define CAR_FACADE_H
#include "Body.h"
#include "Engine.h"
#include "Interior.h"
#include<iostream>

class CarFacade
{
    public:
        void manufactureCar();
    private:
        Body body;
        Engine engine;
        Interior interior;
};

#endif