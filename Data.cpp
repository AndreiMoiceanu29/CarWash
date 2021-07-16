
//
// Created by andrei on 16.07.2021.
//

#include "Data.h"
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

Data::Data(const Data obj){
    this->zi = obj.zi;
    this->luna = obj.luna;
    this->an = obj.an;
}

Data Data::operator=(const Data obj) {
    this->zi = obj.zi;
    this->luna = obj.luna;
    this->an = obj.an;
    return *this;

}

Data::~Data() {}
