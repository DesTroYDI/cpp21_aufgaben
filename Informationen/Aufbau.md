## Aufbau von Programmen innerhalb der Aufgaben
>### Autor: Hendrik Groß
>### Datum: 01.08.2022

Standardmäßiger Aufbau eines CPP-Programmes:
```cpp
// Implementiert die Möglichkeit der Ein-/Ausgabeströme:
// cin >> 
// cout <<
#include <iostream>

// Bibliothek für den Umgang mit strings
// Datentyp: string s = "test";
// Funktionen:  s.length()
// s + s2
// to_string()
// ...
#include <string>


// Verhindert Namenskollisionen und vereinfacht die eingabe von standartisierten Fuktionen
// Beispiel:
// std::cout << "Hallöschen"  wird zu
// cout << "Hallöschen"
using namespace std;


// Standartisierte Hauptfunktion
int main(){
    for(int i=0;i < 20;i++){
        string s = "Neue Nummer: " + to_string(i);

        cout << "[" << s << "] || Laenge: " << s.length() << endl;
    }
}
```

Output:
```
[Neue Nummer: 0] || Laenge: 14
[Neue Nummer: 1] || Laenge: 14
[Neue Nummer: 2] || Laenge: 14
[Neue Nummer: 3] || Laenge: 14
[Neue Nummer: 4] || Laenge: 14
[Neue Nummer: 5] || Laenge: 14
[Neue Nummer: 6] || Laenge: 14
[Neue Nummer: 7] || Laenge: 14
[Neue Nummer: 8] || Laenge: 14
[Neue Nummer: 9] || Laenge: 14
[Neue Nummer: 10] || Laenge: 15
[Neue Nummer: 11] || Laenge: 15
[Neue Nummer: 12] || Laenge: 15
[Neue Nummer: 13] || Laenge: 15
[Neue Nummer: 14] || Laenge: 15
[Neue Nummer: 15] || Laenge: 15
[Neue Nummer: 16] || Laenge: 15
[Neue Nummer: 17] || Laenge: 15
[Neue Nummer: 18] || Laenge: 15
[Neue Nummer: 19] || Laenge: 15
```
