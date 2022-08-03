## Informationen zur Definition von Operatoren
>### Autor: Hendrik Groß
>### Datum: 03.08.2022
<br>
Mit der Überladung von Operatoren lassen sich deren Verhaltenweise bei der Anwendung mit Klassen überarbeiten. Beispiel dafür sind:  

    - operator+
    - operator-
    - operator=
    - operator+=
    - operator==
    - operator++
    - operator--
    - operator<<
    - operator&

Anwendungbeispiele wieder mit der Konto Klassen:
<br><br>

## Header-Datei
```cpp
using namespace std;

class Konto{
private:
    double kontostand;
public:
    // Konstruktor
    Konto(double betrag);

    //Operator
    Konto operator+(Konto &anderesKonto);
    Konto operator-(Konto &anderesKonto);
    
    void druckeKontostand();
};
```
<br>

## C++-Datei (konto.cpp)
```cpp
#include <iostream>
#include "konto.h" // Header-Datei referenzieren

using namespace std;

// Konstruktor
Konto::Konto(double betrag){
    kontostand = betrag;
};

// Implementierung und Rückgabetyp ist der Typ der Klasse
Konto Konto::operator+(Konto &anderesKonto){
    kontostand += anderesKonto.kontostand;

    return Konto(kontostand);
};

Konto Konto::operator-(Konto &anderesKonto){
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

    k1.druckeKontostand();
    k1 = k1 + k2;               // 30 + 60 = 90
    k1.druckeKontostand();
    k1 = k2 - k1;               // 60 - 90 = -30
    k1.druckeKontostand();
};
```
<br>

## Output
```
Kontostand: 30
Kontostand: 90
Kontostand: -30
```