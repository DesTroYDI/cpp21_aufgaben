## Informationen zu Header-Dateien (*.h)
>### Autor: Hendrik Groß
>### Datum: 02.08.2022
<br>
Wie im vorherigen Abschnitt schon vorgestellt können innerhalb von C++ Klassen angewendet werden um Datenstrukturen mit manipulierenden Methoden anwednen zu können.
<br><br>
Header-Dateien werden mit einer Klassendefinition erstellt und beinhalet lediglich die Deklaration einer Klasse und keinen Code.
<br><br>
Konstruktoren helfen dabei ein Objekt zu initialisieren. Eine Definition kann dabei mit Anfangswerten seien, die zur Initialisierung einer Klasse benötigt werden (z.B. Kontostand bei einem Konto).
<br>
Destruktoren sind Funktionen die aufgerufen werden, wenn die Lebenszeit eines Objektes vorbei ist. (Bei lokalen Objekten funktioniert das automatisch, bei dynmaschischen Objekte [class* obj = new class()] muss das der Programmierer übernehmen). Außerdem kann dieser keine Parameter besitzen.
Durch diesen Destrutor können beispielsweise Deithandles oder Speicherplatz wieder freigegeben werden.
<br><br>

## Header-Datei (konto.h)
```cpp
using namespace std;

class Konto{
private:
    int nummer;
    string inhaber;
    double kontostand;
public:
    // Konstruktoren
    Konto(); 
    Konto(double betrag);

    // Destruktor
    ~Konto();

    void einzahlen(double betrag);
    bool abheben(double betrag);
    bool compare(Konto* konto);
};
```
<br>

## C++-Datei (konto.cpp)
```cpp
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
```