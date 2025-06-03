#include <stdio.h>

int add(int a, int b)
{

    int c = a+b;
    return c;
};

int main()
{
    int x = add(10,20);
    printf("%d\n", x);
    return 0;


}