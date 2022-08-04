#include <iostream>

using namespace std;

int main(){
    int zahl1 = 0;
    int zahl2 = 0;
    cout << "Bitte beide Zahlen eingeben:" << endl;
    cin >> zahl1;
    cin >> zahl2;

    int gerundet =0;
    int ganzzahl =0;
    int rest;

    gerundet = zahl1 / zahl2;
    rest = zahl1 % zahl2;
    if(rest >= zahl2 / 2)
        gerundet++;

    cout << zahl1 << " : " << zahl2 << " = " << gerundet << endl;
};