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