#include <stdlib.h>
#include <stdio.h>

struct Rectangle
{
    int length;
    int width;
};

int main()
{
    struct Rectangle r;
    printf("Enter a value for length: ");
    scanf("%d", &r.length);
    printf("Enter a value for width: ");
    scanf("%d", &r.width);
    printf("This is your rectangle: %d, %d\n", r.length, r.width);

}