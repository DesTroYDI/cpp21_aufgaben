## Informationen zu Pointern
>### Autor: Hendrik Groß
>### Datum: 01.08.2022
<br/>

## Code:
```cpp
#include <iostream>

using namespace std;

int main(){
    int val1 = 10;
    int val2 = 20;

    int* ptr1;
    int* ptr2;
    const int* cptr;                        // Variable konstant, aber Pointer nicht
    int* const ptrc = &val1;                // Pointer konstant, aber Variable nicht
    const int* const ptrConst = &val1;      // Pointer und Variable konstant
    
    // Kann nicht Pointer-Wert von ptr1 und ptr2 übernehmen
    // double != int
    double* dblPtr;                         

    // Pointer, wo der Typ noch nicht definiert ist
    void* voidPtr;

    // endl oder '\n' für NewLine
    cout << "Wert [val1] = " << val1 << " || Adresse = " << &val1 << endl; 
    cout << "Wert [val2] = " << val2 << " || Adresse = " << &val2 << endl;
    cout << "------------------------------------\n\n";

    ptr1 = &val1;
    ptr2 = &val2;
    cout << "Pointer [ptr1] = " << ptr1 << " || Wert = " << *ptr1 << endl; 
    cout << "Pointer [ptr2] = " << ptr2 << " || Wert = " << *ptr2 << endl;
    // Möglichkeiten mit Pointern
    //  
    //  ptr1 = ptr2
    //  *ptr1 = *ptr2
    //  *ptr1 = val2
    //  ptr2 = ptrc
    //  
    //  NICHT MÖGLICH: ptr2 = cptr (invalid conversion from 'const int*' to 'int*')
    cout << "------------------------------------\n\n";

    *ptrc = val1; // NUR Variablenwert kann verändert werden
    cptr = &val2; // NUR Pointer kann verändert werden
   
    // ptrConst besitzt beides konstant und kann demnach dies nicht durchführen
    // *ptrConst = val1;
    // ptrConst = &val2;

    cout << "Pointer [ptrc] = " << ptrc << " || Wert = " << *ptrc << endl; 
    cout << "Pointer [cptr] = " << cptr << " || Wert = " << *cptr << endl;

    cout << "------------------------------------\n\n";

    voidPtr = ptr1; 
    // ptr1 = voidPtr;  NICHT MÖGLICH
    
    cout << "Pointer [voidPtr] = " << voidPtr << endl; 
    // Wert kann nicht bestimmt werden, da der Typ nicht bekannt ist 
}
```
<br/>

## Output:
```
Wert [val1] = 10 || Adresse = 0xea4d7ff8dc 
Wert [val2] = 20 || Adresse = 0xea4d7ff8d8 
------------------------------------       

Pointer [ptr1] = 0xea4d7ff8dc || Wert = 10 
Pointer [ptr2] = 0xea4d7ff8d8 || Wert = 20 
------------------------------------       

Pointer [ptrc] = 0xea4d7ff8dc || Wert = 10 
Pointer [cptr] = 0xea4d7ff8d8 || Wert = 20 
------------------------------------       

Pointer [voidPtr] = 0xea4d7ff8dc
```
<br/>

## Call-By-Referenz vs Call-By-Value
<br/>
Durch die Anwendung von Call-By-Referenz können die Funktionen so geschreiben werden, als als wären keine Zeiger vorhanden. Es können also normale Variablen angewendet werden. Dennoch verhält sich eine Referenz wie ein Zeiger und bringt damit die deutlichen die Laufzeitvorteile mit sich. Denn anderes als bei Call-By-Value wird der Kopieraufwand vermieden
<br/><br/>
***!!! WICHTIG !!! Referenzen sich keine Zeiger und sind demnach auch kein eigenes Objekt und reserviert somit auch keinen Speicher***

```cpp
int var1 = 10;      // Normale Variable mit 10 initialisiert
int var2 = 20;      // Normale Variable mit 20 initialisiert

// Referenz
int& ref = var1;    // Referenz wird auch var1 gesetzt
ref = var2;         // ref (und damit var1) ist nun 20
```

Die Implementierung einer Funktion mit Zeigern ist demnach nur aufwendiger aber in der Laufzeit gleich:o<br/><br/>
**Gleich auch ist dabei erkennbar, dass es schwierig ist zu unterscheiden, ob es sich um eine Call-By-Referenz oder Call-By-Value Funktion handel, wenn man diese nicht kennt.**
![Bild](../Ressourcen/Screenshot%202022-08-02%20213540.png)