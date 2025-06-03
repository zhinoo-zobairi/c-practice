#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int width;
    int length;
};


int main()
{
    struct Rectangle *p;
    p = (struct Rectangle*) malloc(sizeof(struct Rectangle));
    p->length = 15;
    p->width = 5;

    struct Rectangle r2 = {30, 60};

    r2.length = 70;

    printf("%d\n", r2.length);
    printf("%d\n", (*p).length);
}