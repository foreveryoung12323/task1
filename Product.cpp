#include "Product.h"

Product::Product()
{
    name = "no name";
    price = 0;
    weight = 0;
}

Product::Product(string name, float price, float weight)
{
    this->name = name;
    this->price = price;
    this->weight = weight;
}

void Product::setName(string name)
{
    this->name = name;
}

void Product::setPrice(float price)
{
    this->price = price;
}

void Product::setWeight(float weight)
{
    this->weight = weight;
}

string Product::getName() const
{
    return name;
}

float Product::getPrice() const
{
    return price;
}

float Product::getWeight() const
{
    return weight;
}

void Product::showProduct() const
{
    cout << "Product:" << name << endl;
    cout << "Price:" << price << endl;
    cout << "Weight:" << weight << endl;
}
