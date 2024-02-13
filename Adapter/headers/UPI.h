#ifndef UPI_H
#define UPI_H
#include <string>

class UPI 
{
public:
    virtual void makePayment(const std::string& buyerID, const std::string& merchantID, double amount) const = 0;
};

#endif
