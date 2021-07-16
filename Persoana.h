//
// Created by andrei on 16.07.2021.
//
#include<string>
#include "Data.h"
#include <iostream>
using namespace std;
#ifndef CARWASH_PERSOANA_H
#define CARWASH_PERSOANA_H
class Persoana{
private:
    string nume;
    string prenume;
    Data dataNasterii;
public:
    Persoana();
    Persoana(string,string,Data);
    Persoana(const Persoana &obj);
    string getNume();
    string getPrenume();
    Persoana& operator=(const Persoana&);
    friend bool operator==(Persoana,Persoana);
    friend istream& operator>>(istream& in, Persoana& obj);
    ~Persoana();
};
#endif //CARWASH_PERSOANA_H
