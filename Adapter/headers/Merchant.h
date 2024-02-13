#ifndef MERCHANT_H
#define MERCHANT_H

#include <string>

class Merchant 
{
public:
    void receivePayment(const std::string& merchantID, double amount) const;
};

#endif