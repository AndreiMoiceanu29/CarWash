//
// Created by andrei on 16.07.2021.
//
#include "Data.h"
#include <iostream>
using namespace std;
#ifndef CARWASH_PROGRAMARE_H
#define CARWASH_PROGRAMARE_H


class Programare: public Data{
private:
    unsigned int ora;
    unsigned int minut;
public:
    Programare();
    Programare(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int);

    friend bool operator==(Programare,Programare);
    void modificaProgramare(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int);
    friend ostream& operator<<(ostream& out, const Programare& obj);
    friend istream& operator>>(istream& in, Programare& obj);
    ~Programare();

};


#endif //CARWASH_PROGRAMARE_H
