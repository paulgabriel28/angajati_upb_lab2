# Cerinta Laborator 2

## Descriere

Acest proiect implementează o aplicație pentru gestionarea evidenței persoanelor angajate într-o firmă. Pentru acest scop, se utilizează o clasă denumită `Angajat`, care are atributul și metodele necesare pentru gestionarea datelor angajaților.

## Clasa Angajat

### Atribute
- `char* nume`: numele angajatului
- `char CNP[14]`: codul numeric personal al angajatului
- `int salariu`: salariul angajatului

### Metode
- `Angajat()`: constructor fără parametri
- `Angajat(const char*, const char[], int)`: constructor cu parametri pentru inițializarea atributelor
- `Angajat(const Angajat&)`: constructor de copiere
- `~Angajat()`: destructor
- `void afisare() const`: afișează toate detaliile unui angajat
- `void copie(const Angajat&)`: realizează o copie profundă a unui obiect `Angajat`
- `int getSalariu() const`: returnează salariul angajatului
- `int getType() const`: returnează tipul angajatului (0 - barbat, 1 - femeie)
- `char* getNume() const`: returnează numele angajatului

### Fișiere
- `angajat.h`: fișierul header care conține declarațiile clasei `Angajat`
- `angajat.cpp`: implementarea metodelor clasei `Angajat`
- `main.cpp`: conține funcțiile principale pentru testarea metodelor și a funcționalităților cerute

## Funcționalități Implementate

1. Angajații sunt stocați într-un vector alocat dinamic, iar obiectele stocate au atribute cu valori date.
2. Se afișează detaliile despre toți angajații.
3. Se calculează câți angajați sunt bărbați și câți sunt femei.
4. Se găsește angajatul cu cel mai mare salariu.
5. Se sortează vectorul de angajați alfabetic, după nume.

## Utilizare

Exemplu de utilizare a obiectelor și metodelor:
```cpp
#include "angajat.h"

int main() {
    // Implementarea exemplului de utilizare se află în fișierul main.cpp
    return 0;
}

