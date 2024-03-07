#include <iostream>
#include <cstring>

#include "angajat.h"

using namespace std;

// Vector angajati, dimensiune, tip {1, 5} - masculin, {2, 6} - feminin
int nr_angajati_type(const Angajat *a, int &dim, int type) {
    int count = 0;
    bool type_angajat = 0;

    (type == 1 || type == 5) ? type_angajat = 0 : type_angajat = 1;
    
    for(int i = 0; i < dim; i++) {
        if(a[i].getType() == type_angajat) {
            count++;
        }
    } 

    return count;
}

// Salariu maxim
Angajat salariu_max(const Angajat *a, int &dim) {
    int sal_max = a[0].getSalariu();
    Angajat a_max;

    for(int i = 0; i < dim; i++) {
        if(a[i].getSalariu() > sal_max) {
            a_max.copie(a[i]);
            sal_max = a[i].getSalariu();
        }
    }
    
    return a_max;
}

// Sortare nume
void sortare_nume(Angajat *a, int &dim) {
    for(int i = 0; i < dim-1; i++) {
        for(int j = i+1; j < dim; j++) {
            if(strcmp(a[i].getNume(), a[j].getNume()) == 1) {
                Angajat temp(a[i]);
                a[i].copie(a[j]);
                a[j].copie(temp);
            }
        }
    }
}



int main()
{
    // Angajat a; //constr fara param
    // Angajat a1("ana","2730103430129",4000); //constr cu param
    // Angajat a2(a1); //constr de copiere
    // a2.afisare();
    // a.copie(a2);//in a se salveaza o copie profunda a lui a2
    // a.afisare();

    // 1.
    Angajat *a;
    
    int n;
    cout<<"1. Dimensiune vector angajati: ";
    cin>>n;

    a = new Angajat[n];

    for(int i = 0; i < n; i++) {
        cout<<"Nume: ";
        char temp_nume[101];
        cin>>temp_nume;

        cout<<"CNP: ";
        char temp_CNP[14];
        cin>>temp_CNP;

        cout<<"Salariu: ";
        int temp_salariu;
        cin>>temp_salariu;

        Angajat temp_a(temp_nume, temp_CNP, temp_salariu);
        a[i].copie(temp_a);
    }


    // 2.
    cout<<"\n\n2. Afisare vector:\n";
    for(int i = 0; i < n; i++) {
        a[i].afisare();
    }

    
    // 3. nr_angajati_type(...)
    cout<<"\n\n3. Afisare numar barbati & femei:\n";
    // Vector angajati, dimensiune, tip {1, 5} - masculin, {2, 6} - feminin
    cout<<"Angajati barbati: "<<nr_angajati_type(a, n, 5)<<endl;
    cout<<"Angajati femei: "<<nr_angajati_type(a, n, 6);


    // 4. salariu_max(...)
    cout<<"\n\n4. Afisare salariat cu salariu maxim:\n";
    Angajat angajat_salariu_max(salariu_max(a, n));
    angajat_salariu_max.afisare();


    // 5. sortare_nume(...)
    sortare_nume(a, n);
    cout<<"\n\n5. Afisare vector sortat dupa nume:\n";
    for(int i = 0; i < n; i++) {
        a[i].afisare();
    }

    return 0;
}