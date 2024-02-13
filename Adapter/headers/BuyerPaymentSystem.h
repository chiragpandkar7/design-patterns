#ifndef BUYER_PAYMENT_SYSTEM_H
#define BUYER_PAYMENT_SYSTEM_H

#include <string>

class BuyerPaymentSystem 
{
public:
    void initiatePayment(const std::string& buyerID, double amount) const;
};

#endif