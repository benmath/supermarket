#include <iostream>
#include <string>
#include "Item.h"

using namespace std;

/*********	Generic Item Class	***********/
Item::Item(long SKU, string description, float price, int quantity, string brand, string category) {
    this->SKU = SKU;
    this->description = description;
    this->price = price;
    this->quantity = quantity;
    this->brand = brand;
    this->category = category;
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

const std::string& Item::getBrand() const {
    return brand;
}

void Item::setBrand(const std::string& brand) {
    this->brand = brand;
}

const std::string& Item::getCategory() const {
    return category;
}

void Item::setCategory(const std::string& category) {
    this->category = category;
}

void Item::setSku(long sku) {
    SKU = sku;
}

/********* Food Class	***********/
Food::Food(long SKU, std::string description, float price, int quantity, std::string brand, std::string category,
        std::string exirationDate) :
        Item(SKU, description, price, quantity, brand, category) {
    this->expirationDate = exirationDate;
}

void Food::setExpirationDate(const std::string& expirationDate) {
    this->expirationDate = expirationDate;
}

const std::string& Food::getExpirationDate() const {
    return expirationDate;
}

/********* Clothing Class	***********/
Clothing::Clothing(long SKU, std::string description, float price, int quantity, std::string brand,
        std::string category, std::string size, std::string color) :
        Item(SKU, description, price, quantity, brand, category) {
    this->color = color;
    this->size = size;
}

void Clothing::setSize(const std::string& size) {
    this->size = size;
}

const std::string& Clothing::getColor() const {
    return color;
}

void Clothing::setColor(const std::string& color) {
    this->color = color;
}

const std::string& Clothing::getSize() const {
    return size;
}

/********* Electronic Class	***********/
Electronic::Electronic(long SKU, std::string description, float price, int quantity, std::string brand,
        std::string category) :
        Item(SKU, description, price, quantity, brand, category) {
}

Furniture::Furniture(long SKU, std::string description, float price, int quantity, std::string brand,
        std::string category) :
        Item(SKU, description, price, quantity, brand, category) {
}
