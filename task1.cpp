using namespace std;
#include <iostream>
#include "Product.h"
#include "Buy.h"
#include "Bill.h"
int main()
{
    Product a("Apple", 20.5, 2.5);
    /*a.showProduct();*/

    Buy b(a, 5);
    b.showBuy();

    Bill d(b);
    d.printBill();
}


