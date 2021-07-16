//
// Created by andrei on 16.07.2021.
//
#include "Persoana.h"
#include <iostream>
#include<string>
using namespace std;
#ifndef CARWASH_MASINA_H
#define CARWASH_MASINA_H


class Masina {
private:
    string marca;
    string model;
    string nrMatriculare;
    Persoana proprietar;
public:
    Masina();
    Masina(string,string,string,Persoana);

    string getMarca();
    string getModel();
    string getNrMatriculare();
    string getProprietar();
    void setProprietar(Persoana);
    friend bool operator==(Masina, Masina);
    friend ostream& operator<<(ostream& out, const Masina& obj);
    friend istream& operator>>(istream& in, Masina& obj);
    ~Masina();
};


#endif //CARWASH_MASINA_H
