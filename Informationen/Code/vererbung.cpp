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
     cout << this->getVorname() << " " << this->getName() << " [" << this->matrikelnummer << "] ist am studieren..." << endl;
}

int main(){
    Student std = Student("Gross", "Hendrik", 100);
    std.arbeiten();
};