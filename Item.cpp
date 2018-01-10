#include <iostream>
#include <string>
#include "Item.h"

using namespace std;

Item::Item(long SKU, string description, float price, int quantity) {
	this->SKU = SKU;
	this->description = description;
	this->price = price;
	this->quantity = quantity;
}

const string& Item::getDescription() const {
	return description;
}

void Item::setDescription(const string& description) {
	this->description = description;
}

float Item::getPrice() const {
	return price;
}

void Item::setPrice(float price) {
	this->price = price;
}

int Item::getQuantity() const {
	return quantity;
}

void Item::setQuantity(int quantity) {
	this->quantity = quantity;
}

long Item::getSku() const {
	return SKU;
}

void Item::setSku(long sku) {
	SKU = sku;
}
