#include <iostream>

using namespace std;

int add(int x, int y){
    return x + y;
}

int mult(int x, int y){
    return x * y;
}

int main(){
    // Funktionspointer
    int (*op)(int, int);

    op = add;
    // op = &add;
    cout << "Ausgabe OP (Add) = " << op(3,4) << endl;

    op = mult;
    // op = &mult;
    cout << "Ausgabe OP (Mult) = " << op(3,4) << endl;
}