#include <iostream>;

using namespace std;

class Person
{
    string name, vorname;
  protected:
    Person( string n, string v );
    
    string getName();
    string getVorname();
};

class Student: public Person  // Umsetzung der Vererbung
{
    int matrikelnummer;
  public:
    Student( string n, string v, int m );
    void arbeiten( );
};

class Professor: public Person  // Umsetzung der Vererbung
{
    string lehrfach;
  public:
    Professor( string n, string v, int m );
    void arbeiten( );
};

class Betreuer: public Person  // Umsetzung der Vererbung
{
    string telefon;
  public:
    Betreuer( string n, string v, int m );
    void arbeiten( );
};