#include <stdio.h>
#include <stdlib.h> 
struct Rectangle
{
    int length;
    int width;
};

void changeLength(struct Rectangle *p, int newLength)
{
    p ->length = newLength;
};

int main()
{
    struct Rectangle r1 = {6,2};

    struct Rectangle *p;

    p = (struct Rectangle*) malloc(sizeof(struct Rectangle)); //type-casting of void* to struct Rectangle*

    p->length = 10;

    p->width = 5;

    changeLength(&r1, 18);

    printf("The rectangle in the heap has Width of %d and length of %d\n", p->width, p->length);

    printf("The rectangle in the stack has Width of %d and length of %d\n", r1.width, r1.length);

}