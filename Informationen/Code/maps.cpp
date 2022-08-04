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