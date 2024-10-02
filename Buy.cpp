#include "Buy.h"

Buy::Buy()
{
    amount = 0;
}

Buy::Buy(Product p, int amount):Product(p)
{
    this->amount = amount;
}

void Buy::setAmount(int amount)
{
    this->amount = amount;
}

int Buy::getAmount() const
{
    return amount;
}

float Buy::calcTotalPrice() const
{
    return amount * getPrice();
}

float Buy::calcTotalWeight() const
{
    return amount * getWeight();
}

void Buy::showBuy() const
{
    Product::showProduct();
    cout << "Amount: "<< amount << endl;
    cout << "-------------------------------\n";
    cout << "Total price: " << calcTotalPrice() << endl;
    cout << "Total weight: " << calcTotalWeight() << endl;
}
