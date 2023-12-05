#include "Machine.h"
#include<iostream>
string Machine::getName() {
    return name;
}
int Machine::getAmount() {
    return amount;
}
void Machine::setAmount(int amount) {
    this->amount = amount;
}
bool Machine::subAmount(int amount) {
    if (this->amount <= 0)
        return false;
    else
        this->amount -= amount;
    return true;
}