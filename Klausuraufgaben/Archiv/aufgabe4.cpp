#include <iostream>

using namespace std;

class Verwertung{
private:
    string nameLieferant;
    double menge;

public:
    Verwertung(string n, double m): nameLieferant(n), menge(m) {};
    void ausgabe(){
        cout << "Lieferant: " << nameLieferant << ", Menge: " << menge << "Tonnen" <<endl;
    };
    virtual double getWert() =0;

    double gibMenge(){ return menge; };
    string getNameLieferant(){ return nameLieferant; };
};

class Glas: Verwertung{
private:
    string bezeichnung = "Glas";
    double preis = 100;
public:
    Glas(string n, double m): Verwertung(n,m) {};

    double getMenge(){ Verwertung::gibMenge(); };

    double getWert(){
        double wert =0;
        wert = preis * getMenge();
        return wert;
    };

    void ausgabe(){
        cout << "Lieferantenname: " << Verwertung::getNameLieferant() << endl;
        cout << "Liefermenge: " << getMenge() << endl;
        cout << "Bezeichnung Rohstoff: Glas" << endl;
        cout << "Wert: " << getWert() << endl;
    };
};

int main(){
    Verwertung *arr[10]; 

    arr[0] = new Glas("hans",200);
    

    double gesamtwert=0;
    for(int i=0;i<10;i++){
        gesamtwert = gesamtwert + arr[i]->getWert();
        arr[i]->ausgabe();
    }

    cout << "Gesamtwert: " << gesamtwert << endl;
};