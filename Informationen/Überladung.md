## Informationen zu Überladung von Methoden/Funktionen
>### Autor: Hendrik Groß
>### Datum: 02.08.2022
<br>

Überladung beschreibt die Deklaration von mehreren Funktionen/Methoden mit demselben Namen und unterschiedlichen Parametern.
<br><br>

## Header-Datei
```cpp
using namespace std;

class Uberladung{
private:
    int var1;
    double var2;

public:
    // Überladung von Konstruktoren
    Uberladung();
    Uberladung(int _var);
    Uberladung(double _var);
    Uberladung(int _var, double _var2);

    // Überladung Methoden
    void Ausgabe(int _var);
    void Ausgabe(double _var);
};
```
<br>

## C++-Datei
```cpp
#include <iostream>
#include "uberladung.h"

using namespace std;

// Konstruktoren
Uberladung::Uberladung(){
    // Was machen
};
Uberladung::Uberladung(int _var){
    // Was anderes machen
};
Uberladung::Uberladung(double _var){
    // Was anderes machen
};
Uberladung::Uberladung(int _var, double _var2){
    // Was anderes machen
};

// Methoden
void Uberladung::Ausgabe(int _var){
    // Was machen
};

void Uberladung::Ausgabe(double _var){
    // Was anderes machen
};


int main(){}
```