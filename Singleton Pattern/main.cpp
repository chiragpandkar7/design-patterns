#include "headers\Container.h"
#include<iostream>

Container*  Container :: mContainer = NULL;

int main()
{
    Container* cobj = Container::getContainer();
    std::cout << cobj << std::endl;

    cobj->setValue(10,11);
    int sum = cobj->addition();

    std::cout << sum << std::endl;

    Container* cobj2 = Container::getContainer();
    std::cout << cobj2 << std::endl;

    cobj2->setValue(12,13);
    sum = cobj2->addition();

    std::cout << sum << std::endl;
}