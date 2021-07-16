//
// Created by andrei on 16.07.2021.
//

#include "Persoana.h"
#include "Data.h"
#include <string>
#include <iostream>
using namespace std;

Persoana::Persoana() {}
Persoana::Persoana(string nume, string prenume, Data dataNasterii) {
    this->nume = nume;
    this->prenume = prenume;
    this->dataNasterii = dataNasterii;

}
string Persoana::getNume() {
    return this->nume;
}
string Persoana::getPrenume() {
    return this->prenume;
}

Persoana::Persoana(const Persoana& obj) {
    this->nume = obj.nume;
    this->prenume = obj.prenume;
    this->dataNasterii = obj.dataNasterii;
}

Persoana& Persoana::operator=(const Persoana& obj) {
    this->nume = obj.nume;
    this->prenume = obj.prenume;
    this->dataNasterii = obj.dataNasterii;
    return *this;
}
bool operator==(Persoana p1, Persoana p2){
    return (p1.nume == p2.nume && p1.prenume == p2.prenume && p1.dataNasterii == p2.dataNasterii);
}

istream& operator>>(istream& in, Persoana& obj){
    in >> obj.nume >> obj.prenume >> obj.dataNasterii;
    return in;
}

Persoana::~Persoana() {}