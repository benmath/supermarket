#include <iostream>
#include <string>
#include "Receipt.h"
#include "Item.h"

using namespace std;

const vector<Item>& Receipt::getItemList() const {
    return (itemList);
}

void Receipt::setItemList(const vector<Item>& itemList) {
    this->itemList = itemList;
}

void Receipt::addItem() {
}

void Receipt::removeItem() {
}

void Receipt::calculateTotalCost() {
}

void Receipt::selectPaymentType() {

}
void Receipt::printReceiptToFile() {
}

void Receipt::printReceiptToConsole() {
}

void Receipt::printReceipt() {
}

void Receipt::clearReciept() {
}
