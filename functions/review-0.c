#include <stdio.h>

/*
Definieren Sie einem Array mit 128 Zeichen und weisen Sie diesem die Zeichen des ASCII-
Zeichensatzes zu. Geben Sie die Zeichen mit dem ASCII-Code 48 bis 57 am Bildschirm aus.
*/


int main()
{
    char arr[128]; // array that can hold 128 characters(Zeichen)

    for(int i = 0; i < 128; i++)
    {
       arr[i] = i; 
    }

    for (int j = 48; j <= 57; j++)
    {
        printf("ASCII Zahl: %d, Zeichen: %c\n", j, arr[j]); // printing the character code, and printing the actual character
    }
}