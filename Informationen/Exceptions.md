## Klausuraufgaben und Lösungen
>### Autor: Hendrik Groß
>### Datum: 04.08.2022
<br>

## Abfangen von Exceptions
#
`Exceptions` treten auf, wenn innerhalb vom Code Fehler auftreten. Diese Fehler können in C++ folgend abgefangen werden:
```cpp
for(int i=5;i>-20;i=i-2>){
    int zahl = i;

    // Es wird versucht, was in diesem Block passiert.
    // Wenn was schiefgeht wird es durch catch abgefangen
    try{
        // Durchführung
    }
    catch(string s){
        // Fehlerbehandlung 
    }
    catch( ... ){       // oder catch()
        // Fängt jede andere Exception ab
    }
}
```
<br>

## Werfen von Exceptions
#
Exceptions können manuel geworfen werden und auch in Form einer eigenen Klasse definiert werden mit der überschriebenen Methode `what()`
```cpp
#include <exception>

class MyException: public exception{
    public:
        const char* what() const throw()
        {return "Fehlerbeschreibung";}
}

if(x > 0)
    throw Exception(); // Typ der Exception z.B. runtime_error, usw...

```