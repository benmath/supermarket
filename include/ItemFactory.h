/*
 * ItemFactory.h
 *
 *  Created on: Jan 11, 2018
 *      Author: bensonmathew
 */

#ifndef ITEMFACTORY_H_
#define ITEMFACTORY_H_

#include <iostream>
#include <string>
#include "Item.h"

class ItemFactory {
    public:
        ItemFactory();
        Item *getItem(std::string itemType, long SKU, std::string description, float price, int quantity,
                std::string brand, std::string category, std::string size = "", std::string color = "",
                std::string exirationDate = "");
};

#endif /* ITEMFACTORY_H_ */
