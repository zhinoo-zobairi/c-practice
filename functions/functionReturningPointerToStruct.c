#include <stdlib.h>

#include <stdio.h>

struct Rectangle
{
    int width;
    int length;
};


struct Rectangle* func()
{
    struct Rectangle *ptr;

    ptr = (struct Rectangle*)malloc(sizeof(struct Rectangle)); // I have to define what for a type struct Rectangle is

    return ptr;
};


int main()
{
    struct Rectangle *ptr = func();
    printf("Where in heap is the rectangle? %p\n", ptr);
    printf("Where in Stack is the pointer itself? %p\n", &ptr);
    ptr->length = 10;
    ptr->width = 5;

    printf("What are its dimensions? %d and %d\n", ptr->length, ptr->width);
}


