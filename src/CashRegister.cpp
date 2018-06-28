#include <iostream>
#include <string>
#include "CashRegister.h"

using namespace std;

/**
 * 	Assuming that the store has enough money to supply a cash register, the default cash and coin
 * 	values are initialized with the following:
 *
 *  1	$100
 *  2	$50
 *  5	$20
 *  5	$10
 *  10	$5
 *  10	$1
 *  10	$0.25
 *  10	$0.10
 *  10	$0.05
 *  10	$0.01
 *
 *  Total: $414.10
 */
CashRegister::CashRegister() {
    this->hundredDollars = 1;
    this->fiftyDollars = 2;
    this->twentyDollars = 5;
    this->tenDollars = 5;
    this->fiveDollars = 10;
    this->oneDollars = 10;
    this->quarters = 10;
    this->dimes = 10;
    this->nickles = 10;
    this->pennies = 10;
}

/**
 * 	If the cash register is initialized with specific cash and coin amounts.
 */
CashRegister::CashRegister(int hundreds, int fifty, int twenty, int ten, int five, int one, int quarter, int dime,
        int nickle, int penny) {
    this->hundredDollars = hundreds;
    this->fiftyDollars = fifty;
    this->twentyDollars = twenty;
    this->tenDollars = ten;
    this->fiveDollars = five;
    this->oneDollars = one;
    this->quarters = quarter;
    this->dimes = dime;
    this->nickles = nickle;
    this->pennies = penny;
}

int CashRegister::getDimes() const {
    return dimes;
}

void CashRegister::setDimes(int dimes) {
    this->dimes = dimes;
}

int CashRegister::getFiftyDollars() const {
    return fiftyDollars;
}

void CashRegister::setFiftyDollars(int fiftyDollars) {
    this->fiftyDollars = fiftyDollars;
}

int CashRegister::getFiveDollars() const {
    return fiveDollars;
}

void CashRegister::setFiveDollars(int fiveDollars) {
    this->fiveDollars = fiveDollars;
}

int CashRegister::getHundredDollars() const {
    return hundredDollars;
}

void CashRegister::setHundredDollars(int hundredDollars) {
    this->hundredDollars = hundredDollars;
}

int CashRegister::getNickles() const {
    return nickles;
}

void CashRegister::setNickles(int nickles) {
    this->nickles = nickles;
}

int CashRegister::getOneDollars() const {
    return oneDollars;
}

void CashRegister::setOneDollars(int oneDollars) {
    this->oneDollars = oneDollars;
}

int CashRegister::getPennies() const {
    return pennies;
}

void CashRegister::setPennies(int pennies) {
    this->pennies = pennies;
}

int CashRegister::getQuarters() const {
    return quarters;
}

void CashRegister::setQuarters(int quarters) {
    this->quarters = quarters;
}

int CashRegister::getTenDollars() const {
    return tenDollars;
}

void CashRegister::setTenDollars(int tenDollars) {
    this->tenDollars = tenDollars;
}

int CashRegister::getTwentyDollars() const {
    return twentyDollars;
}

void CashRegister::setTwentyDollars(int twentyDollars) {
    this->twentyDollars = twentyDollars;
}

float CashRegister::getTotalAmount() const {
    float totalAmount;
    totalAmount = (100 * hundredDollars) + (50 * fiftyDollars) + (20 * twentyDollars) + (10 * tenDollars)
            + (5 * fiveDollars) + (oneDollars) + (0.25 * quarters) + (0.10 * dimes) + (0.05 * nickles)
            + (0.01 * pennies);
    return totalAmount;
}

/**
 * 	Default re-stocking of the Cash Register.
 * 	Any remaining amounts will be added on.
 */
void CashRegister::restockCashRegiser() {
    this->hundredDollars += 1;
    this->fiftyDollars += 2;
    this->twentyDollars += 5;
    this->tenDollars += 5;
    this->fiveDollars += 10;
    this->oneDollars += 10;
    this->quarters += 10;
    this->dimes += 10;
    this->nickles += 10;
    this->pennies += 10;
}

/**
 * 	Re-stock the Cash Register with specific values.
 * 	Any remaining amounts will be added on.
 */
void CashRegister::restockCashRegiser(int hundreds, int fifty, int twenty, int ten, int five, int one, int quarter,
        int dime, int nickle, int penny) {
    this->hundredDollars += hundreds;
    this->fiftyDollars += fifty;
    this->twentyDollars += twenty;
    this->tenDollars += ten;
    this->fiveDollars += five;
    this->oneDollars += one;
    this->quarters += quarter;
    this->dimes += dime;
    this->nickles += nickle;
    this->pennies += penny;
}
