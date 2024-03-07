#include <iostream>
#include <cstring>

#include "angajat.h"

using namespace std;


Angajat::Angajat():nume(NULL), salariu(0) {
    strcpy(CNP, "0000000000000");
}

Angajat::Angajat(const char *new_nume, const char new_CNP[], int new_salariu):salariu(new_salariu) {
    if(nume != NULL) {
        delete [] nume;
        nume = NULL;
    }

    nume = new char[strlen(new_nume) + 1];

    strcpy(nume, new_nume);

    strcpy(CNP, new_CNP);
}

Angajat::Angajat(const Angajat &a) {
    // cout<<"\nconst de copiere\n";
    
    Angajat::copie(a);

    // if(nume != NULL) {
    //     delete [] nume;
    //     nume = NULL;
    // }

    // nume = new char[strlen(a.nume) + 1];

    // strcpy(nume, a.nume);

    // strcpy(CNP, a.CNP);

    // salariu = a.salariu;
}

Angajat::~Angajat() {
    if(nume != NULL) {
        delete [] nume;
    }
}


void Angajat::afisare() const{
    if(nume != NULL) {
        cout<<"Nume: "<<nume<<endl;
    }
    else
        cout<<"Nume: --"<<endl;

    cout<<"CNP: "<<CNP<<endl;
    
    cout<<"Salariu: "<<salariu<<endl;
}


void Angajat::copie(const Angajat &a) {
    if(nume != NULL) {
        delete [] nume;
        nume = NULL;
    }

    nume = new char[strlen(a.nume) + 1];

    strcpy(nume, a.nume);

    strcpy(CNP, a.CNP);

    salariu = a.salariu;
}

int Angajat::getSalariu() const {
    return salariu;
}

int Angajat::getType() const {
    if(CNP[0] == '1' || CNP[0] == '5')
        return 0;
    else if(CNP[0] == '2' || CNP[0] == '6')
        return 1;

    return 2;
}

char* Angajat::getNume() const {
    return nume;
}