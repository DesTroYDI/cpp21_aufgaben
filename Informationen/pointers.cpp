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

    // endl oder '\n' für NewLine
    cout << "\nWert [val1] = " << val1 << " || Adresse = " << &val1 << endl; 
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

    ptr1 = &val1;
    ptr2 = &val2;
    cout << "Pointer [ptr1] = " << ptr1 << " || Wert = " << *ptr1 << endl; 
    cout << "Pointer [ptr2] = " << ptr2 << " || Wert = " << *ptr2 << endl;
}