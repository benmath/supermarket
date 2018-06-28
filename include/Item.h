#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>

class Item {
    private:
        long SKU;					// ex: 1234567890
        std::string description;	// ex: Winter Sportswear Jacket
        std::string brand;			// ex: Nike
        std::string category;		// ex: Jacket
        float price;				// ex: $15.34
        int quantity;				// ex: 5

    public:
        Item(long SKU, std::string description, float price, int quantity, std::string brand, std::string category);
        const std::string& getDescription() const;
        void setDescription(const std::string& description);
        float getPrice() const;
        void setPrice(float price);
        int getQuantity() const;
        void setQuantity(int quantity);
        long getSku() const;
        void setSku(long sku);
        const std::string& getBrand() const;
        void setBrand(const std::string& brand);
        const std::string& getCategory() const;
        void setCategory(const std::string& category);
};

class Food: public Item {
    private:
        std::string expirationDate;		// Format: MM/DD/YYYY
    public:
        Food(long SKU, std::string description, float price, int quantity, std::string brand, std::string category,
                std::string exirationDate);
        const std::string& getExpirationDate() const;
        void setExpirationDate(const std::string& expirationDate);
};

class Clothing: public Item {
    private:
        std::string size;		// S, M, L, XL, etc.
        std::string color;		// blue, black, green, yellow, orange, etc.
    public:
        Clothing(long SKU, std::string description, float price, int quantity, std::string brand, std::string category,
                std::string size, std::string color);
        const std::string& getColor() const;
        void setColor(const std::string& color);
        const std::string& getSize() const;
        void setSize(const std::string& size);
};

class Electronic: public Item {
    public:
        Electronic(long SKU, std::string description, float price, int quantity, std::string brand,
                std::string category);
        // category will be the type of device.
};

class Furniture: public Item {
    public:
        Furniture(long SKU, std::string description, float price, int quantity, std::string brand,
                std::string category);
        // category will be the room where the furniture will reside.
};

#endif
