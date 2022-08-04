## Templates
>### Autor: Hendrik Groß
>### Datum: 04.08.2022
<br>

## Funktionstemplates
#
`Templates` helfen innerhalb von C++ dabei Umsetzung für mehrere Datentypen gleichzeitig durchführen zu können.
```cpp
// Diese Funktion ist theoretisch auch für den Datentyp double oder andere möglich
void tausche( int &p1, int &p2 )
{ 
    int h=p1; 
    p1=p2; 
    p2=h;
}
```
Umsetzung mit einem template:
```cpp
template <typename T> 
void tausche( T &p1, T &p2 )
{ 
    T h=p1;
    p1=p2;
    p2=h;
}
```
<br>

#

## Code
```cpp
#include <iostream>

using namespace std;

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
```
<br>

## Output
```
p1 = 2 | p2 = 5
p1 = 5 | p2 = 2
```

## Klassentemplates
#
Klassentemplates helfen dabei Klassen dynamischer und Typenunabhängiger zu gestalten. In dem Nachfolgenden Beispiel ist es z.B. nur möglich den Array als double zu nutzen:
```cpp
class ArrayCls{
private:
    string s;
    double dblArr;
    double *dblArrPtr;
};
```
Mit Klassentemplates kann diese Definition Typenunabhängig gestaltet werden:
```cpp
template<class T>
class ArrayCls{
private:
    string s;
    T dblArr;
    T *dblArrPtr;
};
```