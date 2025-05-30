#include "discounts.h"
//Defines three discount rates.
double applyRoryDiscount(double price) {
    return price * 0.50;
}

double applyTigerDiscount(double price) {
    return price * 0.70;
}

double applyAdamDiscount(double price) {
    return price * 0.90;
}
//Applies discount by code

double applyDiscount(std::string& code, double price) {
    if (code == "Rory") {
        return applyRoryDiscount(price);
    } else if (code == "Tiger") {
        return applyTigerDiscount(price);
    } else if (code == "Adam") {
        return applyAdamDiscount(price);
    } else {
        return price;
    }
}
