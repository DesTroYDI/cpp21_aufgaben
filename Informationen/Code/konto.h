using namespace std;

class Konto{
private:
    int nummer;
    string inhaber;
    double kontostand;
public:
    // Konstruktoren
    Konto(); 
    Konto(double betrag);

    // Destruktor
    ~Konto();

    void einzahlen(double betrag);
    bool abheben(double betrag);
    bool compare(Konto* konto);
};