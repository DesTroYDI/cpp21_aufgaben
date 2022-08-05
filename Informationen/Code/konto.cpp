#include <iostream>
#include "konto.h" // Header-Datei referenzieren

using namespace std;

// Konstruktoren
Konto::Konto(){                 // Standardkonstruktor
    kontostand = 0;
};

Konto::Konto(double betrag){    // Konstruktor mit Initialwert
    kontostand = betrag;
};

// Destruktor
Konto::~Konto(){
    // Speicherplatz bereinigen
};

void Konto::einzahlen(double betrag){
    kontostand += betrag;
};

// Funktion kann auch ohne Objekt durchgeführt werden
int Konto::getAnzahl(){ return anzahl;};

bool Konto::abheben(double betrag){
    if(kontostand > betrag){
        kontostand -= betrag;
        return true;
    }
    else
        return false;
};

bool Konto::compare(Konto* konto){
    if( this == konto ) // Schaut ob die beiden Pointer gleich sind
        return true;
    else
        return false;
};

int main(){
    Konto::getAnzahl();
}