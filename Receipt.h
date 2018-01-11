#ifndef RECEIPT_H
#define RECEIPT_H


#include <iostream>
#include <string>
#include <vector>
#include "Item.h"

class Receipt {
private:
	enum PaymentType{ Cash, Credit_Card, Gift_Card };
	vector<Item> itemList;

public:
	Receipt();
	const vector<Item>& getItemList() const;
	void setItemList(const vector<Item>& itemList);

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
