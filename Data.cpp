
//
// Created by andrei on 16.07.2021.
//

#include "Data.h"
#include <iostream>
using namespace std;

Data::Data() {
    this->an = 0;
    this->luna = 0;
    this->zi = 0;
}

Data::Data(unsigned int zi,unsigned int luna,unsigned int an) {
    this->zi = zi;
    this->luna = luna;
    this->an = an;
}


bool operator==(Data d1, Data d2){
    return (d1.an == d2.an && d1.zi == d2.zi && d1.luna == d2.luna);
}
istream& operator>>(istream& in, Data& obj){
    in >> obj.zi >> obj.luna >> obj.an;
    return in;
}
Data::~Data() {}