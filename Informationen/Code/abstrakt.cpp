#include <iostream>
#include "abstrakt.h"

using namespace std;

Person::Person(string n, string v){
    name = n;
    vorname = n;
};

Person::~Person(){
    cout << "Loesche Basisdaten" << endl;
};


Arbeiter::Arbeiter(string n, string v, int m)
        :Person(n, v), mitarbeiternummer(m){};

Arbeiter::~Arbeiter(){
        cout << "Loesche zusaetzliche Arbeiterdaten" << endl;
};

void Arbeiter::arbeiten(){
    cout << "Mitarbeiter ist am arbeiten..." << endl;
};

string Arbeiter::testFnc(int n){
    // Ohne Deklaration und Definition wird ein Fehler vom Compiler geworfen
    return "ENDE";
};


int main(){
    Arbeiter a1("Gross", "Hendrik", 1733);
    a1.arbeiten();
    
    // Späte Bindung
    // Person* pers;
    // pers = new Arbeiter("Gross", "Hendrik", 1734);
    // so wird ebenfalls die richtige Methode ausgeführt
};