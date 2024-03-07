#pragma once

class Angajat{
// atributele sunt implicit private
    char* nume; // Popescu_Ion
    char CNP[14];
    int salariu;

public:
    // constr. fara param; 
    // util pentru a crea obiecte intializate cu valori default
    // necesar pt. alocarea spatiului pentru elemente din vect. de angajati
    // nume = NULL; CNP-ul este  de ex: "000..0"; medie=0.0
    Angajat();// = default;

    //constr. cu param; pentru a initializa cu valori toate atributele;
    Angajat(const char*, const char[], int);

    // constructor de copiere - se apeleaza automat la transmiterea
    // parametrilor in fctii prin valoare;
    // returnarea obj din fctii prin valoare;
    // puneti: cout<<"const de copiere"; (ca sa vedeti unde e apelat)
    Angajat(const Angajat&);

    // elibereaza spatiu ocupat de un obiect
    ~Angajat();

    // afiseaza toate atributele unui angajat
    void afisare() const;

    // face o copie profunda a parametrului si o stocheaza in
    // objectul cu care se face apelul;
    void copie(const Angajat &);

    int getSalariu() const;

    // 0 - barbati, 1 - femeie
    int getType() const;

    char* getNume() const;
};
