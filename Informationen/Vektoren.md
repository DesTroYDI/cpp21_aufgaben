## Informationen zu Vektoren und Maps
>### Autor: Hendrik Groß
>### Datum: 02.08.2022
<br>

# Vektoren
Der Template-Datentyp `vector` ist eine Alternative zum Array. Ein `vector` besitzt jedoch im Gegensatz zu diesem keine feste Länge und prüft, das der Index die Länge des Vektors nicht überschreitet. Dadurch wurde auf dem [Heap](/Informationen/HeapStack.md) gespeichert.

## C++-Datei
```cpp
#include <iostream>
#include <vector> // Ermöglicht das Anwenden von Vektoren

using namespace std;

int main(){
    // Initialisierung
    vector<int> vec(100); 

    // Initialisierung über Resize
    vector<int> vec2;
    vec2.resize(200);

    cout << "Vektorgroesse1: " << vec.size() << endl;
    cout << "Vektorgroesse2: " << vec2.size() << endl;
    
    // Werte setzen
    for(int i=0;i<100;i++){
        vec[i]= i;
        vec2[i]= i +2; 
    }

    for(int i=30;i<40;i++){
        cout << "vec[" << i << "] = " << vec.at(i) << " || vec2[" << i << "] = " << vec2[i]  << endl;
    }

    // Iteratoren für Ausgabe nutzen
    vector<int>::iterator it;
    it = vec2.begin();
    cout << *it << endl; 
    it++; // Zum nächsten Element gehen
    cout << *it << endl; 
    // Solange möglich bis [it != vec2.end()]
    
    vec.clear(); // Leert den Vektor

};
```
<br>

## Output
```
Vektorgroesse1: 100
Vektorgroesse2: 200
vec[30] = 30 || vec2[30] = 32
vec[31] = 31 || vec2[31] = 33
vec[32] = 32 || vec2[32] = 34
vec[33] = 33 || vec2[33] = 35
vec[34] = 34 || vec2[34] = 36
vec[35] = 35 || vec2[35] = 37
vec[36] = 36 || vec2[36] = 38
vec[37] = 37 || vec2[37] = 39
vec[38] = 38 || vec2[38] = 40
vec[39] = 39 || vec2[39] = 41
2
3
```
<br>

# Listen
Der Template-Datentyp `list` ist optimiert dafür Elemente einzufügen und löschen zu können. Dafür ist dieser nicht Indexbasiert und muss mithilfe von Iteratoren durchlaufen werden 

## C++-Datei
```cpp
#include <iostream>
#include <list> // Ermöglicht das Anwenden von Listen

using namespace std;

int main(){
    list<int> lst; // Initialisierung

    // Werte zuweisen
    for(int i=0;i<10;i++){
        lst.push_back(i+5);
    }

    // z.B. Sortierung möglich 
    // lst.sort();

    // Werteausgabe dann über Iterator
    list<int>::iterator it;

    it = lst.begin();
    while(it != lst.end())
        cout << "Wert: " << *(it++) << endl; 
}
```
<br>

## Output
```
Wert: 5
Wert: 6
Wert: 7
Wert: 8
Wert: 9
Wert: 10
Wert: 11
Wert: 12
Wert: 13
Wert: 14
```
<br>

# Maps
Der Template-Datentyp `maps` ist eine Folge von Paaren aus Schlüsseln und Werten. Dabei ist jedem Schlüssel genau ein Wert zugeordnet. 

## C++-Datei
```cpp
#include <iostream>
#include <map> // Ermöglicht das Anwenden von Maps

using namespace std;

// Definition
typedef map<string, string> telefonMap;


int main(){
    map<string, string> telefonMap; // Initialisierung
    telefonMap::iterator it; // Iterator

    // Werte setzen
    telefonMap["paul"] = "1232434";
    telefonMap["gerda"] = "675657567";
    telefonMap["du"] = "4235645";
    telefonMap["ich"] = "9879787";

    // Werte auslesen
    it = telefonMap.begin();
    while(it != telefonMap.end()){
        cout << "Key: " << it->first << " | Value= " << it->second << endl;
        it++;
    }

    cout << "Wert suchen und finden..." << endl;
    it = telefonMap.find("paul");
    cout << "Key: " << it->first << " | Value= " << it->second << endl;
};
```
<br>

## Output
```
Key: du | Value= 4235645
Key: gerda | Value= 675657567
Key: ich | Value= 9879787
Key: paul | Value= 1232434
Wert suchen und finden...
Key: paul | Value= 1232434
```
<br>