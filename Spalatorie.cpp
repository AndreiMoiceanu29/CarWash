//
// Created by andrei on 16.07.2021.
//

#include "Spalatorie.h"
#include "Persoana.h"
#include "Data.h"
#include "Programare.h"
#include<string>
#include <vector>
#include<iostream>
using namespace std;

Spalatorie::Spalatorie() {}
Spalatorie::Spalatorie(vector <Masina> masini, vector <Programare> programari, string denumier, Persoana proprietar) {
    this->masini = masini;
    this->programari = programari;
    this->proprietar = proprietar;
    this->denumire = denumier;
}

Spalatorie::Spalatorie(string denumire, Persoana proprietar) {
    this->denumire = denumire;
    this->proprietar = proprietar;
}

void Spalatorie::schimbaDenumire(string denumire) {
    this->denumire = denumire;
}

void Spalatorie::schimbaProprietar(Persoana proprietar) {
    this->proprietar = proprietar;
}

string Spalatorie::getDenumire() {
    return this->denumire;
}
string Spalatorie::getProprietar() {
    return (this->proprietar.getNume() + " " + this->proprietar.getPrenume());
}

void Spalatorie::adaugaMasina(Masina masina, Programare programare) {
    this->masini.push_back(masina);
    this->programari.push_back(programare);
}

void Spalatorie::schimbaMasinaProgramataLa(Programare programare, Masina masina) {
    for(int i=0; i<this->programari.size();i++){
        if(this->programari[i] == programare && this->masini[i].getProprietar() == masina.getProprietar()){
            this->masini[i] = masina;
            break;
        }
    }
}

void Spalatorie::schimbaProgramareaMasinii(Masina masina, Programare programare) {
    for(int i=0;i<this->masini.size();i++){
        if(this->masini[i] == masina){
            this->programari[i] = programare;
            break;
        }
    }
}

void Spalatorie::printMasini(){
    for(auto masina : this->masini){
        cout << masina << endl;
    }
}

void Spalatorie::printProgramari() {
    for(auto programare : this->programari){
        cout << programare << endl;
    }
}

void Spalatorie::stergeMasina(Masina masina , Programare programare) {
    int idx;
    for(int i=0; i< this->programari.size(); i++){
        if(this->masini[i] == masina && this->programari[i] == programare){
            idx = i;
            break;
        }
    }
    this->masini.erase(this->masini.begin() + idx);
    this->programari.erase(this->programari.begin() + idx);
}
Spalatorie::~Spalatorie() {}