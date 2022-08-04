## Informationen zu Heap/Stack
>### Autor: Hendrik Groß
>### Datum: 03.08.2022
<br>

## Heap/Stack
<br>

Mit dem Heap und Stack sind Speicherbereiche gemeint, die unterschiedlich innerhalb des eines Programmes angewendet und angesprochen werden können.

![Bild](../Ressourcen/Screenshot%202022-08-04%20124905.png)
<br>

## statische Daten
# 
Beinhaltet die globalen Variablen und als statisch bzw. konstant deklarierten Variablen. Dieser Speicherabschnitt darf nur gelesen und nicht beschrieben werden 
<br>

## Stack
# 
Der Stack wird vom Compiler genutzt, um Variablenwerte, Parameterwerte, Zwischenergebnisse und Rücksprungadressen zu speichern. Beispielsweise wird auf dem Stack die Rücksprungadresse bei einem Funktionsaufruf gespeicher Ebenfalls die lokalen Variablen werden auf dem Stack abgespeichert.
```cpp
// Daten die auf dem Stack abgespeichert werden
int i;
string sArr[20];

string s = "StringVariable";
```
`Der Programmierer muss sich nicht um diesen Speicherbereich kümmern. Er wird vom Compiler benutzt und auch wieder freigegeben.` 

<br>

## Heap
# 
Der Speicherbereich Heap wird dynamisch während des Programmdurchlaufes durch den Programmierer angewendet. Dafür wird mit `new` ein Zeiger auf ein neues Element im Heap erstellt. Dieser Speicherbereich kann mit `delete` wieder freigegeben werden.
```cpp
// Daten die auf dem Heap abgespeichert werden
int* i = new int;
int *iArr = new int[1000];

// Freigabe der Daten
delete i; 
delete [] iArr;
```
`Der Programmierer muss sich um die Benutzung und wieder Freigabe des Speichers kümmern. Bei Klassen kann dabei ein Destruktor definiert werden.` 