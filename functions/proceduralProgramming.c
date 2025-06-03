#include <stdio.h>

#include <stdlib.h>

struct Rectangle
{
    int width;
    int length;
};

void initialise(struct Rectangle *p, int w, int l)
{  
    p->width = w;
    p->length = l;
}

int area(struct Rectangle rectangle)
{
    int area = rectangle.length * rectangle.width;
    return area;

}

void changeLength(struct Rectangle *p, int l)
{
    p->length = l;
}

int main()
{
    struct Rectangle r; // An instance of data type Rectangle will be created
    initialise(&r, 5, 10); // In this function we can initialise values of r, hence passing by address
    area(r); // area will make a copy of struct Rectangle r and access its own copy. At the end of the day, we just care about the area.
    changeLength(&r, 15);
}