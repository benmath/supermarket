#ifndef RECEIPT_H
#define RECEIPT_H

#include <iostream>
#include <string>
#include <vector>
#include "Item.h"

class Receipt {
    private:
        enum PaymentType {
            Cash, Credit_Card, Gift_Card
        };
        std::vector<Item> itemList;

    public:
        Receipt();
        const std::vector<Item>& getItemList() const;
        void setItemList(const std::vector<Item>& itemList);

        void addItem();
        void removeItem();
        void calculateTotalCost();
        void selectPaymentType();

        void printReceiptToFile();
        void printReceiptToConsole();
        void printReceipt();

        void clearReciept();
};

#endif
