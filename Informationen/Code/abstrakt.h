#include <iostream>

using namespace std;

class Person{
private:
    string name, vorname;
protected:
    // Konstruktor 
    Person(string n, string v);

    // Abstrakte Funktion/Methode
    virtual void arbeiten() = 0;
    virtual string testFnc(int n) = 0;
    // =0: Keine Implementierung muss vorgenommen werden

    // Abstrakter Destruktor
    virtual ~Person();
};

class Arbeiter: Person{
private: 
    int mitarbeiternummer;
public:
    Arbeiter(string n, string v, int m);
    ~Arbeiter(); // Kann, muss aber nicht definiert werden

    void arbeiten();
    string testFnc(int n);
};