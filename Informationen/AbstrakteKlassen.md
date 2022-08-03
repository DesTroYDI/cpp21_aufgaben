## Informationen zu Abstrakten Klassen und virtuelle Methoden
>### Autor: Hendrik Groß
>### Datum: 02.08.2022
<br>

Wenn von einer Oberklassen keine Objekte erzeugt werden sollen, kann ein Konstruktur als `private` oder `protected` definiert werden. 
<br>Dazu ist es möglich zu eine abstrakte Klasse zu definieren. Diese muss mindestens eine abstrakte Methode besitzten:
```cpp
virtual void arbeiten() = 0; // rein virtuell also abstrakt 
```
Diese bedeutet, dass eine abgeleitete Klassen ein solche Methode programmieren müssen. `= 0` symbolisiert den nicht vorhandenen Rumpf `{ }`.
<br> Beispiel

## Header-Datei
```cpp

```
<br>

## C++-Datei
```cpp

```