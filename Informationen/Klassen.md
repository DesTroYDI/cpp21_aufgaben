## Informationen zu Klassen/Strukturen
>### Autor: Hendrik Groß
>### Datum: 01.08.2022
<br>

## Klassen
Dies beinhaltet nur wie Klassen beispielsweise angewendet werden. Um die tiefere Struktur und definition darzustellen sollte die Informationsseite für [Headers](/Informationen/Headers.md) eingesehen werden.
<br>

Code:
```cpp
#include <iostream>

using namespace std;

// Klasse
class Konto{
private:                // Nur in Klasse verfügbar
    int nummer;
    string inhaber;
    double kontostand;

    static int anzahl;  // Klassenvariable: Haben für alle Objekte von Typ Klasse den gleichen Wert
protected:              // Nur in Klasse und unterklassen verfügbar
    int protVar;

public:                 // Zugriff von überall
    void einzahlen(double betrag){
        (*this).kontostand += betrag; // this ist immer der Zeiger auf das eigene Objekt
    }

    // Funktion kann auch ohne Objekt durchgeführt werden
    static int getAnzahl(){ return anzahl;};

    bool auszahlen(double betrag){
        if(this->kontostand > betrag){
            kontostand -= betrag;
            return true;
        }
        else
            return false;
    }

    void druckeKontostand (){
        cout << "Kontostand: " << kontostand << endl;
    }
};

// Zugriffe auf eine Klasse demonstrieren
int main(){
    Konto k1;
    // Dynamische Erzeugung eines Objektes mit Standard-Konstruktor
    Konto* k2 = new Konto(); 
    
    k1.einzahlen(100);
    k1.druckeKontostand();
    if(k1.auszahlen(10)){
        k1.druckeKontostand();
    }

    // Klassen und Pointer und Pfeil-Operator
    Konto* ptrKonto = &k1;
    (*ptrKonto).einzahlen(200); 
    // oder
    ptrKonto->druckeKontostand();

    // Klassenvariablen; gleiches Ergebnise
    k1.getAnzahl();
    Konto::getAnzahl();;
}
```

Output:
```
Kontostand: 100
Kontostand: 90
Kontostand: 290
```
<br>

## Strukturen
Strukturen sind im Gegensatz zu Klassen nur ein Verbund aus mehreren Datentypen. Diese können von überall verändert werden. Funktionen, die diese Daten verändern können gibt es nicht. Demnach gibt es auch keine Konstrukoren oder Destruktoren. 
<br>
z.B.
```cpp
using namespace std;

struct Person{
    string Vorname;
    string Nachname;
    int Alter;
};
```