#pragma once
#include<fstream>
#include "Buy.h"
class Bill :
    public Buy
{
public:
    Bill(Buy b);
    void printBill()const;
};

