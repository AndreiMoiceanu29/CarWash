//
// Created by andrei on 16.07.2021.
//

#include "Programare.h"
#include <iostream>
using namespace std;
bool operator==(Programare p1, Programare p2){
    return (p1.ora == p2.ora && p1.minut == p2.minut && p1.zi == p2.zi && p1.luna == p2.luna && p1.an == p2.an);
}
Programare::Programare():Data() {}
Programare::Programare(unsigned int zi, unsigned int luna, unsigned int an, unsigned int ora, unsigned int minut): Data(zi,luna,an) {
    this->ora = ora;
    this->minut = minut;
}

void Programare::modificaProgramare(unsigned int zi, unsigned int luna, unsigned int an, unsigned int ora, unsigned int minut) {
    this->minut = minut;
    this->ora = ora;
    this->zi = zi;
    this->luna = luna;
    this->an = an;
}
ostream& operator<<(ostream& out, const Programare& obj){
    out << obj.ora << " " << obj.minut << " " << obj.zi << " " << obj.luna << " " << obj.an << endl;
    return out;
}
istream& operator>>(istream& in, Programare& obj){
    in >> obj.ora >> obj.minut >> obj.zi >> obj.luna >> obj.an;
    return in;
}
Programare::~Programare(){}