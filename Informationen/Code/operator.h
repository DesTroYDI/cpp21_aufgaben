using namespace std;

class Konto{
private:
    double kontostand;
public:
    // Konstruktor
    Konto(double betrag);

    //Operator
    Konto operator+(const Konto &anderesKonto);
    Konto operator-(const Konto &anderesKonto);
    
    void druckeKontostand();
};