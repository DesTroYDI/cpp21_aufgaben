#include <iostream>
#include "operator.h"

using namespace std;

// Konstruktor
Konto::Konto(double betrag){
    kontostand = betrag;
};

// Implementierung und Rückgabetyp ist der Typ der Klasse
Konto Konto::operator+(const Konto &anderesKonto){
    kontostand += anderesKonto.kontostand;

    return Konto(kontostand);
};

ostream& operator<<(ostream &aus, const Konto &k){
    return aus << k.kontostand << endl;
};

Konto Konto::operator-(const Konto &anderesKonto){
    kontostand -= anderesKonto.kontostand;
    // Das Objekt selber wird wieder zurückgegeben nach manipulation
    return *this;
};

void Konto::druckeKontostand (){
        cout << "Kontostand: " << kontostand << endl;
};

int main(){
    Konto k1 = Konto(30);
    Konto k2 = Konto(60);

    cout << k1;

    k1.druckeKontostand();
    k1 = k1 + k2;               // 30 + 60 = 90
    k1.druckeKontostand();
    k1 = k2 - k1;               // 60 - 90 = -30
    k1.druckeKontostand();
};