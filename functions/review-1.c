#include <stdio.h>
#include <stdlib.h>
/*
a) Schreiben sie drei Funktionen, welche je ein Array von 10 ganzen Zahlen als Parameter annehmen
und jeweils Folgendes berechnen und als Rückgabewert zurückgeben:
• Die Funktion summe() berechnet die Summe der gegebenen Zahlen,
• die Funktion maximum() das Maximum der gegebenen Zahlen und
• die Funktion durchschnitt() den Durchschnitt der gegebenen Zahlen.
Die Funktion für den Durchschnitt der Zahlen soll das Resultat der Summe nutzen.
b) Schreiben sie eine weitere Funktion statistik(), welche drei Pointer-Parameter sum, max und
avg erwartet. Nach Aufruf dieser Funktion sollen alle passenden Werte in den entsprechenden
Variablen vorzufinden sein.
*/

int summe(int arr[], int size)
{   
    int total = 0;
    for (int i=0; i < size; i++)
    {
        total+=arr[i];
    }
    return total;
};

int durchschnitt(int total, int size)
{  
    int durchschnitt = total/size;
    return durchschnitt;
}

int maxim(int arr[], int size)
{
    int largest = arr[0]; // assume the first value is the largest, and check the rest.
    for(int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

void statistik (int arr[], int size, int *tot, int *avg, int *larg)
{   
    *tot = summe(arr,size);
    *avg = durchschnitt(*tot, size);
    *larg = maxim(arr,size);

    printf("here is the total: %d, here is the maximum: %d, here is the average of all: %d\n", *tot, *larg, *avg);

}

int main()
{
    int arr[10] = {3, 7, 1, 9, 4, 2, 6, 5, 8, 0};
    int total, average, largest;
    statistik(arr, 10, &total, &average, &largest);
    return 0;

}