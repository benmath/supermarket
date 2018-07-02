/*
 * ItemFactory.cpp
 *
 *  Created on: Jan 11, 2018
 *      Author: bensonmathew
 */

#include <iostream>
#include <string>

#include <ItemFactory.h>
#include <Item.h>

using namespace std;

ItemFactory::ItemFactory() {

}
/**
 * 	getItem will retrieve the specific kind of Item so the proper information will be classified
 * 	appropriately.
 */
Item ItemFactory::getItem(string itemType, long SKU, string description, float price, int quantity, string brand,
                          string category, string size, string color, string exirationDate) {

    // Here we are going to use the Factory design pattern to conveniently select the appropriate item

    Item item = NULL;

    if (itemType.compare("Food")) {
        item = Food(SKU, description, price, quantity, brand, category, exirationDate);
    } else if (itemType.compare("Clothing")) {
        item = Clothing(SKU, description, price, quantity, brand, category, size, color);
    } else if (itemType.compare("Electronic")) {
        item = Electronic(SKU, description, price, quantity, brand, category);
    } else if (itemType.compare("Furniture")) {
        item = Furniture(SKU, description, price, quantity, brand, category);
    }

    return (item);
}
