#pragma once
#include "Product.h"
class Buy :
    public Product
{
private:
    int amount;

public:
    Buy();
    Buy(Product p, int amount);

    void setAmount(int amount);
    int getAmount() const;
    float calcTotalPrice() const;
    float calcTotalWeight()const;
    void showBuy()const;
};

