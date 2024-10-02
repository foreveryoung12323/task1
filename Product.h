#pragma once
#include <iostream>
#include <string>
using namespace std;
class Product
{
private:
	string name;
	float price;
	float weight;
public:
	Product();
	Product(string name, float price, float weight);

	void setName(string name);
	void setPrice(float price);
	void setWeight(float weight);

	string getName()const;
	float getPrice()const;
	float getWeight()const;

	void showProduct()const;
};

