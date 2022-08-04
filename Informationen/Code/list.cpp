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