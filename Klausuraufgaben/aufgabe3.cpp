#include <iostream>

using namespace std;

int main(){
    string wort;
    int verschFaktor;

    char verschl[10];

    cout << "Geben Sie bitte ein Wort ein (max. 10 Zeiche):" <<endl;
    cin >> wort;
    cout << "Wählen Sie einen Verschiebefaktor:" <<endl;
    cin >> verschFaktor;

    for(int i=0;i<10;i++){
        verschl[i] = wort[i]+verschFaktor;
    }

    cout << "Verschlüsselt: " << verschl <<endl;
}