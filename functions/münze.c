#include <stdio.h>
#include <stdlib.h>
/*
a) Schreiben Sie ein Programm, welches eine Münzsammlung speichern kann. Eine Münze soll
Eigenschaften speichern wie Währung, Münzwert, Jahrgang, Tauschwert, Größe, Kaufdatum.
b) Erweitern Sie das Programm mit einer Struktur „Münzkategorie“, welche die Währung und den
Münzwert speichert. Münzen sollen sodann per Pointer auf diese Münzkategorien verweisen.
c) Schreiben Sie eine Funktion, welche eine Münze als Pointer erwartet und deren Eigenschaften
schön formatiert ausgibt.
d) Schreiben Sie eine Funktion, um eine Münze zu einer bestehenden Münzsammlung hinzuzufügen,
und testen Sie diese.
*/
struct Muenze
{
    int jahrgang;
    float tauschwert_euro;
    float groesse;
    char kaufdatum[11];  // presence of dots (.) "DD.MM.YYYY"
    struct Kategorie *kategorie; // Using a pointer to another struct inside a struct
};

struct Kategorie
{
    char waehrung[20];
    int wert;
};

void printing (struct Muenze *p) // doesn't need struct Kategorie *ptr because p->kategorie already points to the category from inside the Muenze.
{
    printf("   Jahrgang   |   Tauschwert   |   Größe   |   Kaufdatum   |   Währung   |   Wert   \n");
    printf("   %d   |   %.2f   |   %.1f   |   %s   |   %s   |   %d   \n", p->jahrgang, p->tauschwert_euro, p->groesse, p->kaufdatum, p->kategorie->waehrung, p->kategorie->wert);

};

int main()
{
    struct Kategorie euro;
    strcpy(euro.waehrung, "Euro"); // must use strcpy for strings or as below string literals are allowed to be used in struct initializers. If you want to change it later, use strcpy().
    euro.wert = 0.5;
    struct Muenze m = 
    {
    2002,
    2.0,
    26.0,
    "12.05.2023",
    &euro
    };
}