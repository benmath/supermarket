#ifndef CASHREGISTER_H
#define CASHREGISTER_H

#include <iostream>
#include <string>

using namespace std;

class CashRegister {
private:
	float static totalCash;
	int hundredDollars;
	int fiftyDollars;
	int twentyDollars;
	int tenDollars;
	int fiveDollars;
	int oneDollars;
	int quarters;
	int nickles;
	int dimes;
	int pennies;

public:
	CashRegister();
	CashRegister(int hundreds, int fifty, int twenty, int ten, int five, int one, int quarter, int dime, int nickel, int penny);
	int getDimes() const;
	void setDimes(int dimes);
	int getFiftyDollars() const;
	void setFiftyDollars(int fiftyDollars);
	int getFiveDollars() const;
	void setFiveDollars(int fiveDollars);
	int getHundredDollars() const;
	void setHundredDollars(int hundredDollars);
	int getNickles() const;
	void setNickles(int nickles);
	int getOneDollars() const;
	void setOneDollars(int oneDollars);
	int getPennies() const;
	void setPennies(int pennies);
	int getQuarters() const;
	void setQuarters(int quarters);
	int getTenDollars() const;
	void setTenDollars(int tenDollars);
	float getTotalCash() const;
	int getTwentyDollars() const;
	void setTwentyDollars(int twentyDollars);

	void restockCashRegiser();
};

#endif
