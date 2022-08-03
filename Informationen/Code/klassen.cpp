#include <iostream>

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
}

// Struktur
struct Person{
    string Vorname;
    string Nachname;
    int Alter;
};