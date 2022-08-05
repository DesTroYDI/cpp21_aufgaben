#include <iostream>

using namespace std;

int main(){
    int input;
    string weitermachen = "ja";

    while(weitermachen == "ja"){
        cout << "Bite eine Zahl zwischen 1 und 10 eingeben." << endl;
        cin >> input;

        for(int i=1;i<=10;i++){
            int ergeb = i * input;
            cout << i << " x " << input << " = " << ergeb << endl;
        }
        
        cout << "Wollen Sie weitermachen (ja/nein)";
        cin >> weitermachen;
    }
};