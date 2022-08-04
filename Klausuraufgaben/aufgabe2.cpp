#include <iostream>

using namespace std;

int main(){
    string worte[4]={"katze", "hund", "maus","pferd"};
    string lowest = "";
    int x=0;
    int y=0;

    while(x<3){
        y = x+1;
        while(y<4){
            if(worte[x] < worte[y]){
                lowest = worte[x];
                worte[x] = worte[y];
                worte[y] = lowest;
            }
            y++;
        }
        x++;
    }

    for(int i=0;i<4;i++)
        cout << "Wort: " << worte[i] << endl;
};