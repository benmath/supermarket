#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>

using namespace std;

class Item {
private:
	long SKU;
	string description;
	float price;
	int quantity;
	
public:
	Item(long SKU, string description, float price, int quantity);
	const string& getDescription() const;
	void setDescription(const string& description);
	float getPrice() const;
	void setPrice(float price);
	int getQuantity() const;
	void setQuantity(int quantity);
	long getSku() const;
	void setSku(long sku);
};

#endif
