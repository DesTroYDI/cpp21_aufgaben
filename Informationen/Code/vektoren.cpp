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