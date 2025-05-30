//tj wangchuk
//05/20/25
//company lab
#ifndef DISCOUNTS_H
#define DISCOUNTS_H

#include <string>
//Declares four discount functions.
double applyTigerDiscount(double price);
double applyRoryDiscount(double price);
double applyAdamDiscount(double price);
double applyDiscount(std::string& code, double price);

#endif
