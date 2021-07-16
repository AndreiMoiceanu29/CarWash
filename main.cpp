#include "Spalatorie.h"
#include "Persoana.h"
#include "Data.h"
#include "Programare.h"
#include<string>
#include <vector>
#include<iostream>

Spalatorie creazaSpalatorie();
void selecteazaSpalatorie(vector<Spalatorie>);
void stergeSpalatorie(vector<Spalatorie>);
void citesteMasinaSiProgramare(Masina&, Programare&);

using namespace std;
int main() {



    vector<Spalatorie> spalatorii;
    Spalatorie selectata;
    bool notExited = true;


    while(notExited){
        int optiuneMeniuPrincipal;
        cout << "************************************";
        cout << "           SC CarWash SRL           ";
        cout << "************************************";
        cout <<"Bun venit pe platforma noastra de programari online !" << endl;
        cout << "Alegeti o optiune din meniul de mai jos:" << endl;
        cout << "1) Creati o spalatorie" << endl;
        cout << "2) Selectati o spalatorie" << endl;
        cout << "3) Stergeti spalatoria" << endl;
        cout << "4) Iesire" << endl;
        cin >> optiuneMeniuPrincipal;
        switch (optiuneMeniuPrincipal) {
            case 1: spalatorii.push_back(creazaSpalatorie());
                    break;
            case 2: selecteazaSpalatorie(spalatorii);
                    break;
            case 3: stergeSpalatorie(spalatorii);
                    break;

            case 4: notExited = false;
                    break;
            default: cout << "Ati introdus o optiune gresita ! Va rog incercati din nou !" <<  endl;
        }
    }

}

Spalatorie creazaSpalatorie(){
    string denumire;
    Persoana proprietar;
    cout << "Introduceti denumirea:" << endl;
    cin >> denumire;
    cout << "Introduceti datele de proprietar(Nume, Prenume, Zi, Luna, An nastere) separate prin spatiu" << endl;
    cin >> proprietar;
    Spalatorie spalatorie(denumire,proprietar);
    cout << "Spalatorie creata !" << endl;
    return spalatorie;
}
void citesteMasinaSiProgramare(Masina& m, Programare& p){
    cout << "Introduceti datele pentru masina";
    cout << "Marca, model, nrMatriculare, nume, prenume, zi, luna, an separate prin spatiu" << endl;
    Masina masina;
    cin >> masina;
    cout << "Introduceti datele programarii(ora, minut, zi, luna, an)" << endl;
    Programare prog;
    cin >> prog;
    m = masina;
    p = prog;
}
void selecteazaSpalatorie(vector<Spalatorie> spalatorii){
    if(spalatorii.size() == 0){
        cout << "Momentan nu e nicio spalatorie inregistrata" << endl;
        return;
    }
    cout << "Selecteaza una dintre spalatorii" << endl;
    for(int i=0;i<spalatorii.size();i++){
        cout << i << " " << spalatorii[i].getDenumire() << endl;

    }
    int idx;
    cin >> idx;
    bool notExited = true;
    while(notExited){
        cout << "Spalatoria " << spalatorii[idx].getDenumire() << endl;
        cout << "1) Schimba denumire" << endl;
        cout << "2) Schimba proprietar" << endl;
        cout << "3) Inscrie o masina" << endl;
        cout << "4) Schimba masina" << endl;
        cout << "5) Schimba programarea" << endl;
        cout << "6) Afiseaza masinile" << endl;
        cout << "7) Sterge Programarea" << endl;
        cout << "8) Iesire" << endl;
        int optiune;
        cin >> optiune;
        switch (optiune) {
            case 1: {
                cout << "Introduceti denumirea noua:" << endl;
                string denumire;
                cin >> denumire;
                spalatorii[idx].schimbaDenumire(denumire);
            }
            break;
            case 2: {
                cout << "Introduceti datele pentru un proprietar nou(Nume, Prenume, Zi, Luna, An, separate prin spatiu)" << endl;
                Persoana proprietar;
                cin >> proprietar;
                spalatorii[idx].schimbaProprietar(proprietar);
            }
            break;
            case 3: {
                Masina masina;
                Programare prog;
                citesteMasinaSiProgramare(masina,prog);
                spalatorii[idx].adaugaMasina(masina,prog);
            }
            break;
            case 4: {
                Masina masina;
                Programare prog;
                citesteMasinaSiProgramare(masina,prog);
                spalatorii[idx].schimbaMasinaProgramataLa(prog,masina);
            }
            break;
            case 5:{
                Masina masina;
                Programare prog;
                citesteMasinaSiProgramare(masina,prog);
                spalatorii[idx].schimbaProgramareaMasinii(masina,prog);
            }
            break;
            case 6:{
                spalatorii[idx].printMasini();
            }
            break;
            case 7:{
                Masina masina;
                Programare prog;
                citesteMasinaSiProgramare(masina,prog);
                spalatorii[idx].stergeMasina(masina,prog);
            }
            break;
            case 8: notExited = false;
            break;
            default: cout << "Ati introdus un argument gresit" << endl;
        }
    }
}

void stergeSpalatorie(vector<Spalatorie> spalatorii){
    if(spalatorii.size() == 0){
        cout << "Momentan nu e nicio spalatorie inregistrata" << endl;
        return;
    }
    cout << "Alegeti ce spalatorie doriti sa stergeti " << endl;
    int idx;
    for(int i=0; i<spalatorii.size();i++){
        cout << i << " " << spalatorii[i].getDenumire();

    }
    cin >> idx;
    spalatorii.erase(spalatorii.begin() + idx);
    cout << "Spalatorie stearsa !" << endl;
}

Masina creazaMasina(){
    return Masina();
}

void afiseazaDetaliileUneiMasini(vector<Masina> masini){
    return;
}

