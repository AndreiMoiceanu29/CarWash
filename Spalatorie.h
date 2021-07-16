//
// Created by andrei on 16.07.2021.
//
#include "Masina.h"
#include "Persoana.h"
#include "Data.h"
#include "Programare.h"
#include <string>
#include <vector>
using namespace std;
#ifndef CARWASH_SPALATORIE_H
#define CARWASH_SPALATORIE_H


class Spalatorie {
private:
    vector<Masina> masini;
    vector<Programare> programari;
    string denumire;
    Persoana proprietar;
public:
    Spalatorie();
    Spalatorie(vector<Masina>, vector<Programare>, string, Persoana);
    Spalatorie(string, Persoana);
    void schimbaDenumire(string denumire);
    void schimbaProprietar(Persoana);
    string getDenumire();
    string getProprietar();
    void adaugaMasina(Masina, Programare);
    void schimbaMasinaProgramataLa(Programare,Masina);
    void schimbaProgramareaMasinii(Masina, Programare);
    void printMasini();
    void printProgramari();
    void stergeMasina(Masina,Programare);
    ~Spalatorie();
};


#endif //CARWASH_SPALATORIE_H
