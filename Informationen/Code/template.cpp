#include <iostream>

using namespace std;

template<class T>
class ArrayCls{
private:
    string s;
    T dblArr;
    T *dblArrPtr;
};

template <typename T> 
void tausche( T &p1, T &p2 )
{ 
    T h=p1;
    p1=p2;
    p2=h;
};

int main(){
    double p1 = 2;
    double p2 = 5;

    cout << "p1 = " << p1 << " | p2 = " << p2 << endl;
    tausche(p1,p2);
    cout << "p1 = " << p1 << " | p2 = " << p2 << endl;
};