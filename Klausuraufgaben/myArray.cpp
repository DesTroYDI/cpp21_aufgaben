#include <iostream>

using namespace std;

class MyArray{
private:
    int m_arraySize;
    int m_index;
    int* m_p_array;
public:
    MyArray(int arrSize){
        m_arraySize = arrSize;
        m_index = -1;
        m_p_array = new int [arrSize];
    };

    int getArraySize(){ return m_arraySize; };

    void einfügen(int value){
        if(m_index >= (m_arraySize -1)){
            cout << "Array ist voll" << endl;
            return;
        }
        else{
            m_index++;
            *(m_p_array + m_index) = value;
        }
    };

    void inhalteLoeschen(){
        if(m_index == -1){
            cout << "Array ist leer" << endl;
            return;
        }

        for(int i=0;i<m_arraySize;i++){
            *(m_p_array + i) = 0;
        }
        m_index = -1;
    };

    void anzeigen(){
        if(m_index == -1){
            cout << "Array ist leer" << endl;
            return;
        }

        for(int i=0;i<m_arraySize;i++){
            cout << *(m_p_array + i) << endl;
        }
    };

    bool isEmpty(){
        if(m_index == -1){
            return true;
        }
        else{
            return false;
        }
    };

    bool isFull(){
        if(m_index >= m_arraySize){
            return true;
        }
        else{
            return false;
        }
    };

    bool istImArray(int value){
        if(m_index == -1){
            cout << "Array ist leer" << endl;
            return false;
        }

        bool b = false;
        for(int i=0;i<m_arraySize;i++){
            if(*(m_p_array + i) == value){
                b = true;
            }
        }
        return b;
    };

    void aendereWert(int index, int value){
        if(index < 0 || index >= m_arraySize){
            cout << "Index nicht im Bereich des Arrays" << endl;
            return;
        }
        *(m_p_array + (index + 1)) = value;
    };
};

int main(){
    MyArray myArr(5);
    int arr[5] = {50,51,52,53,54};

    for(int i=23;i<28;i++){
        myArr.einfügen(i);
    };
    

    int arrA[5][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12},
        {13,14,15}
    };

    int arrB[3][5];
    int hilfX, hilfY;

    for(int i=0;i<5;i++){
        for(int t=0;t<3;t++){
            arrB[hilfY][hilfX] = arrA[i][t];
            if(hilfX >= 4){
                hilfY++;
                hilfX=0;
            }
            else{
                hilfX++;
            }
        }
    }
};