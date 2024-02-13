#include "..\headers\CarFacade.h"

void CarFacade::manufactureCar()
{
    std::cout << "Car manufacturing process started: \n";
    engine.assembleEngine();
    body.assembleBody();
    interior.installInterior();
    std::cout << "Car manufacturing process completed. \n";
}