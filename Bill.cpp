#include "Bill.h"

Bill::Bill(Buy b):Buy(b)
{

}

void Bill::printBill() const
{
	ofstream file("Bill.txt");
	if (file.is_open()) {
		file << "Product:" << getName() << endl;
		file << "Price:" << getPrice() << endl;
		file << "Weight:" << getWeight() << endl;
		Product::showProduct();
		file << "Amount: " << getAmount() << endl;
		file << "-------------------------------\n";
		file << "Total price: " << calcTotalPrice() << endl;
		file << "Total weight: " << calcTotalWeight() << endl;
	}
}
