#include <iostream>
#include <vector>

using namespace std;

// Klasse
class Konto{
private:                // Nur in Klasse verfügbar
    int nummer;
    string inhaber;
    double kontostand;

protected:              // Nur in Klasse und unterklassen verfügbar
    int protVar;

public:                 // Zugriff von überall
    void einzahlen(double betrag){
        (*this).kontostand += betrag; // this ist immer der Zeiger auf das eigene Objekt
    }

    vector<int*> vec;
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

    ~Konto(){
        cout << "Im Destruktor" << endl;
        for(int i=0; i< vec.size();i++)
            delete vec.at(i);
    }
};

// Zugriffe auf eine Klasse demonstrieren
int main(){
    Konto *kArray = new Konto[5];

    kArray[0].einzahlen(20);
    kArray[1].einzahlen(20);
    
    if(1 == 1){
        Konto k1;

        for(int i = 20;i<50;i++)
            k1.vec.push_back(&i);
    }

    for(int i=0;i<5;i++){
        kArray[i].druckeKontostand();
    };
    
    cout << "---" << endl;
    Konto *k = kArray;

    for(int i=0;i<5;i++){
        k->druckeKontostand();
        k++;
    };
    
}
