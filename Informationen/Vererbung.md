## Informationen zu Klassenvererbung
>### Autor: Hendrik Groß
>### Datum: 02.08.2022
<br>

Mit der Vererbung ist es möglich Unter- und Oberklassen zu definieren um Gemeinsamkeiten auszulagern.
    
    - Schaffen von Unterklassen: Spezialisierung 
    - Extrahieren von Gemeinsamkeiten: Abstraktion

Beispiel von Vererbung:
![Bild](../Ressourcen/Screenshot%202022-08-03%20191441.png)

## Header-Datei
```cpp
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
```
<br>

## CPP-Datei
```cpp
#include <iostream>
#include "vererbung.h"

using namespace std;

Person::Person( string n, string v ){ // Konstruktor Person
    name=n;
    vorname = v;
};

string Person::getName(){ return name; }
string Person::getVorname(){ return vorname; }

Student::Student( string n, string v, int m ) // Konstruktor Student
    : Person(n,v), matrikelnummer(m)
{ };

void Student::arbeiten(){
     cout << getVorname() << " " << this->getName() << " [" << matrikelnummer << "] ist am studieren..." << endl;
}

int main(){
    Student std = Student("Gross", "Hendrik", 100);
    std.arbeiten();
};
```
<br>

## Output
```
Hendrik Gross [100] ist am studieren...
```