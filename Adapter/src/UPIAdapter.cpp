#include "..\headers\UPIAdapter.h"
#include <iostream>

UPIAdapter::UPIAdapter(BuyerPaymentSystem* buyerPaymentSystem, Merchant* merchant) : mBuyerPaymentSystem(buyerPaymentSystem) , mMerchant(merchant)
{

}

void UPIAdapter::makePayment(const std::string& buyerID, const std::string& merchantID, double amount) const 
{
    mBuyerPaymentSystem->initiatePayment(buyerID, amount);
    std::cout << "UPI processing payment to merchant: " << merchantID << std::endl;

    mMerchant->receivePayment(merchantID, amount);
    std::cout << "Payment recieved from UPI-ID : " << buyerID << ", Amount : " << amount << std::endl;
}