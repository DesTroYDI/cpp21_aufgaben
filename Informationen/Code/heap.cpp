#include <iostream>

using namespace std;

int main(){
    // Daten die auf dem Stack abgespeichert werden
    int iStack;
    string sArrStack[20];

    string sStack = "StringVariable";

    // Daten die auf dem Heap abgespeichert werden
    int* iHeap = new int;
    int *iArrHeap = new int[1000];

    // Freigabe der Daten
    delete iHeap; 
    delete [] iArrHeap;
};