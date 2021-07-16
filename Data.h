//
// Created by andrei on 16.07.2021.
//
#include <iostream>
#ifndef CARWASH_DATA_H
#define CARWASH_DATA_H
using namespace std;
class Data{
protected:
    unsigned int an;
    unsigned int zi;
    unsigned int luna;
public:
    Data();
    Data(unsigned int,unsigned int,unsigned int);

    friend bool operator==(Data, Data);
    friend istream& operator>>(istream& in, Data& obj);
    ~Data();
};


#endif //CARWASH_DATA_H
