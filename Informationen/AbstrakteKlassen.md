## Informationen zu Abstrakten Klassen und virtuelle Methoden
>### Autor: Hendrik Groß
>### Datum: 02.08.2022
<br>

Wenn von einer Oberklassen keine Objekte erzeugt werden sollen, kann ein Konstruktur als `private` oder `protected` definiert werden. 
<br>Dazu ist es möglich zu eine abstrakte Klasse zu definieren. Diese muss mindestens eine abstrakte Methode besitzten:
```cpp
virtual void arbeiten() = 0; // rein virtuell also abstrakt 
```
Diese bedeutet, dass eine abgeleitete Klassen ein solche Methode programmieren müssen. `= 0` symbolisiert den nicht vorhandenen Rumpf `{ }`.
<br>

Abstrakte Methoden helfen dabei, eine `'späte Bindung'` innerhalb von Vererbungen herzustellen. So werden die auszuführenden Methoden erst zur Laufzeit entschieden und ebenfalls in der richtigen Klasse ausgeführt.
<br><br> Beispiel:

## Header-Datei
```cpp
#include <iostream>

using namespace std;

class Person{
private:
    string name, vorname;
protected:
    // Konstruktor 
    Person(string n, string v);

    // Abstrakte Funktion/Methode
    virtual void arbeiten() = 0;
    virtual string testFnc(int n) = 0;
    // =0: Keine Implementierung muss vorgenommen werden

    // Abstrakter Destruktor
    virtual ~Person();
};

class Arbeiter: Person{
private: 
    int mitarbeiternummer;
public:
    Arbeiter(string n, string v, int m);
    ~Arbeiter(); // Kann, muss aber nicht definiert werden

    void arbeiten();
    string testFnc(int n);
};
```
<br>

## C++-Datei
```cpp
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
```
<br>

## Output
```
Mitarbeiter ist am arbeiten...
Loesche zusaetzliche Arbeiterdaten
Loesche Basisdaten
```
