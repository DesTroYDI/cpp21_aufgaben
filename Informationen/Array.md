## Informationen zu Arrays bzw. Feldern
>### Autor: Hendrik Groß
>### Datum: 01.08.2022
<br/>

Felder bzw. Arrays sind eine Anreihung von Datenelemtenen des gleichen Types. Der Typ bestimmt, wieviele Bytes ein Index einnimmt:
![Bild](../Ressourcen/Screenshot%202022-08-02%20215853.png)

z.B. bei Datentyp `char` 1-Byte und `float` 4-Bytes. Dies ist relevant, wenn Arrays mit Pointers angewendet werden.

## Code:
```cpp
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
```

## Output:
```
zahlen[0] = 2
zahlen2[0] = 0
zahlen[1] = 4
zahlen2[1] = 1
zahlen[2] = 6
zahlen2[2] = 2
zahlen[3] = 8
zahlen2[3] = 3
------------------------------------

Wert: 2 | Addresse: 0x553f5ff8c0
Wert: 6 | Addresse: 0x553f5ff8c8
------------------------------------
```

<br>
<br>

*Bild zu den komplexen Deklarationen
![Bild](../Ressourcen/Screenshot%202022-08-02%20222545.png)