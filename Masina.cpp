//
// Created by andrei on 16.07.2021.
//

#include "Masina.h"
#include "Persoana.h"
#include<string>
using namespace std;

Masina::Masina() {}
Masina::Masina(string marca, string model, string nrMatriculare, Persoana proprietar) {
    this->marca = marca;
    this->model = model;
    this->nrMatriculare = nrMatriculare;
    this->proprietar = proprietar;
}
Masina::Masina(const Masina obj) {
    this->marca = obj.marca;
    this->model = obj.model;
    this->nrMatriculare = obj.nrMatriculare;
    this->proprietar = obj.proprietar;
}

Masina Masina::operator=(const Masina obj) {
    this->marca = obj.marca;
    this->model = obj.model;
    this->nrMatriculare = obj.nrMatriculare;
    this->proprietar = obj.proprietar;
    return *this;
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

void Masina::~Masina(){}