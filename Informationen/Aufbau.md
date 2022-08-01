## Aufbau von Programmen innerhalb der Aufgaben
>### Autor: Hendrik Groß
>### Datum: 01.08.2022

Standardmäßiger Aufbau eines CPP-Programmes:
```cp
// Implementiert die Möglichkeit der Ein-/Ausgabeströme:
// cin >> 
// cout <<
#include <iostream>

// Bibliothek für den Umgang mit strings
// Datentyp: string s = "test";
// Funktionen:  s.size()
// s + s2
// ...
#include <string>


// Verhindert Namenskollisionen und vereinfacht die eingabe von standartisierten Fuktionen
// Beispiel:
// std::cout << "Hallöschen"  wird zu
// cout << "Hallöschen"
using namespace std;


// Standartisierte Hauptfunktion
int main(){

}
```