#ifndef UPI_ADAPTER_H
#define UPI_ADAPTER_H

#include "UPI.h"
#include "BuyerPaymentSystem.h"
#include "Merchant.h"

class UPIAdapter : public UPI 
{

public:
    UPIAdapter(BuyerPaymentSystem* buyerPaymentSystem, Merchant* merchant);
    void makePayment(const std::string& buyerID, const std::string& merchantID, double amount) const override;

private:
    BuyerPaymentSystem* mBuyerPaymentSystem;
    Merchant* mMerchant;
};

#endif