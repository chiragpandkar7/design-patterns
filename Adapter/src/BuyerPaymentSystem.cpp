#include "..\headers\BuyerPaymentSystem.h"
#include <iostream>

void BuyerPaymentSystem::initiatePayment(const std::string& buyerID, double amount) const 
{
    std::cout << "Buyer's payment initiated: " << amount << " from " << buyerID << std::endl;
}
