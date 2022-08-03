using namespace std;

class Uberladung{
private:
    int var1;
    double var2;

public:
    // Überladung von Konstruktoren
    Uberladung();
    Uberladung(int _var);
    Uberladung(double _var);
    Uberladung(int _var, double _var2);

    // Überladung Methoden
    void Ausgabe(int _var);
    void Ausgabe(double _var);
};