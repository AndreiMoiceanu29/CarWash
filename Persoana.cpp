//
// Created by andrei on 16.07.2021.
//

#include "Persoana.h"
#include "Data.h"
#include <string>

using namespace std;

Persoana::Persoana() {}
Persoana::Persoana(string nume, string prenume, Data dataNasterii) {
    this->nume = nume;
    this->prenume = prenume;
    this->dataNasterii = dataNasterii;

}
string Persoana::getNume() {
    return this->nume
}
string Persoana::getPrenume() {
    return this->prenume;
}

Persoana::Persoana(const Persoana obj) {
    this->nume = obj.nume;
    this->prenume = obj.prenume;
    this->dataNasterii = obj.dataNasterii;
}

Persoana Persoana::operator=(const Persoana obj) {
    this->nume = obj.nume;
    this->prenume = obj.prenume;
    this->dataNasterii = obj.dataNasterii;
    return *this;
}

Persoana::~Persoana() {}