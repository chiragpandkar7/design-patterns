#include "..\headers\Merchant.h"
#include <iostream>

void Merchant::receivePayment(const std::string& merchantID, double amount) const
{
    std::cout << "Merchant " << merchantID << " received payment: " << amount << std::endl;
}