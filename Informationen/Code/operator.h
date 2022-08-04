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
    friend ostream& operator<<(ostream &aus, const Konto &k);

    void druckeKontostand();
};