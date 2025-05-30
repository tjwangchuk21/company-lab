//tj wangchuk
//05/20/25
//company lab
#include "communications.h"
#include <algorithm>
//Formats customer message responses.
std::string greetCustomer(std::string& name) {
    return "Hello " + name + ", and welcome to TJ's Golf!";
}

void formatAddress(std::string& address) {
    std::transform(address.begin(), address.end(), address.begin(), ::toupper);
}

std::string closingMessage(std::string& productName) {
    return "Thank you for choosing " + productName + ". We hope you enjoy it and come back to TJ's Golf!";
}
