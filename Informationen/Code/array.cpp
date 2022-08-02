#include <iostream>

using namespace std;

int main(){
    // Definition von Eindimensionalen Arrays
    int zahlen[4];
    for(int i=0;i<4;i++){
        zahlen[i] = (i + 1) * 2;
    }
    
    int zahlen2[4] = {0,1,2,3};


    for(int i=0;i<4;i++){ // Output
        cout << "zahlen[" << i <<  "] = " << zahlen[i] << endl;
        cout << "zahlen2[" << i <<  "] = " << zahlen2[i] << endl;
    }
    
    // NICHT MÖGLICH: zahlen2 = zahlen;
    // Muss Index für Index mit einer For-Schleife übergeben werden

    // Mehrdimensionale Array
    int mehrZahlen[2][2];


    cout << "------------------------------------\n\n";

    // Pointer von Arrays
    int *ptr;

    ptr = zahlen; // Pointer zeiggt auf Startaddresse von zahlen: zahlen[0]
    cout << "Wert: " << *ptr << " | Addresse: " << ptr << endl;

    ptr = ptr + 2; // entspricht: zahlen[2]
    cout << "Wert: " << *ptr << " | Addresse: " << ptr << endl;

    
    cout << "------------------------------------\n\n";
    // Komplexe Deklarationen

    int *x[5];          // x ist ein Array von 5 Zeigern auf int
    int (*x2) [5];      // x2 ist ein Zeger auf einen Array von int
    // Image anbei
}