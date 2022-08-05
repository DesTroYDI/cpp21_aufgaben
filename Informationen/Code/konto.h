using namespace std;

class Konto{
private:
    int nummer;
    string inhaber;
    double kontostand;
    static int anzahl;  // Klassenvariable
public:
    // Konstruktoren
    Konto(); 
    Konto(double betrag);

    // Destruktor
    ~Konto();

    static int getAnzahl();
    void einzahlen(double betrag);
    bool abheben(double betrag);
    bool compare(Konto* konto);
};