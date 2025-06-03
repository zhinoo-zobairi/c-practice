#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main()
{
    int x = 10;
    int y = 20;
    swap(&x, &y);
    printf("x = %d and y = %d\n",x,y);
    return 0;
}