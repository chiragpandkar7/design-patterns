#include "headers\BuyerPaymentSystem.h"
#include "headers\Merchant.h"
#include "headers\UPIAdapter.h"

#include <iostream>

int main()
{
    BuyerPaymentSystem* buyerPaymentSystem = new BuyerPaymentSystem();
    Merchant* merchant = new Merchant();
    UPI* upiAdapter = new UPIAdapter(buyerPaymentSystem, merchant);

    upiAdapter->makePayment("chirag@okaxis", "kunal@xxx", 50.0);

    delete buyerPaymentSystem;
    delete upiAdapter;
    delete merchant;

    return 0;
}