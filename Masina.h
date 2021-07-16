//
// Created by andrei on 16.07.2021.
//
#include "Persoana.h"
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
    Masina(const Masina);
    Masina operator=(const Masina);
    string getMarca();
    string getModel();
    string getNrMatriculare();
    string getProprietar();
    void setProprietar(Persoana);
    ~Masina();
};


#endif //CARWASH_MASINA_H
