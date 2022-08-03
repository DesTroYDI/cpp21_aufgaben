
using namespace std;

class Konto{
private:
    double kontostand;
public:
    // Konstruktor
    Konto(double betrag);

    //Operator
    Konto operator+(Konto &anderesKonto);
    Konto operator-(Konto &anderesKonto);
    
    void druckeKontostand();
};