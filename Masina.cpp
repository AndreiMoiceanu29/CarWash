//
// Created by andrei on 16.07.2021.
//

#include "Masina.h"
#include "Persoana.h"
#include<string>
#include <iostream>
using namespace std;

Masina::Masina() {}
Masina::Masina(string marca, string model, string nrMatriculare, Persoana proprietar) {
    this->marca = marca;
    this->model = model;
    this->nrMatriculare = nrMatriculare;
    this->proprietar = proprietar;
}


string Masina::getMarca() {
    return this->marca;
}
string Masina::getModel() {
    return this->model;
}
string Masina::getNrMatriculare() {
    return this->nrMatriculare;
}
string Masina::getProprietar() {
    string proprietar = "";
    proprietar += this->proprietar.getNume();
    proprietar += " ";
    proprietar += this->proprietar.getPrenume();
    return proprietar;
}

void Masina::setProprietar(Persoana proprietarNou) {
    this->proprietar = proprietarNou;
}
bool operator==(Masina m1, Masina m2){
    return (m1.nrMatriculare == m2.nrMatriculare && m1.proprietar == m2.proprietar && m1.model == m2.model && m1.marca == m2.marca);
}

ostream& operator<<(ostream& out, const Masina& obj){
    out << obj.marca << " " << obj.model << " " << obj.nrMatriculare << endl;
    return out;
}

istream& operator>>(istream& in, Masina& obj){
    in >> obj.marca >> obj.model >> obj.nrMatriculare >> obj.proprietar;
    return in;
}

Masina::~Masina(){}