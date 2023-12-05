#ifndef MACHINE_H
#define MACHINE_H
#include<iostream>
#include<string>
using namespace std;

class Machine {
protected:
    string name;
    int amount;
public:
    string getName();
    int getAmount();
    void setAmount(int amount);
    bool subAmount(int amount);
};
#endif