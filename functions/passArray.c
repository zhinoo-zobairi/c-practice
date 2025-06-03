#include <stdio.h>
#include <stdlib.h>
void calculateArray (int A[])
{    A[0] = 10;
    for (int i = 0; i < 5; i++)
    {
       printf("%d ", A[i]);
    };
    
};

int* createArray(int size)
{  
    int *p;
    p = (int*)malloc(size);
    return p;
};

struct Rectangle
{
    int length;
    char name[20];
}r1;


int main()
{
    //int B[5] = {1,2,3,4,5};
    //calculateArray(B);
    //int *p = createArray(10);
    //printf("Address of the very first element of the created array is:%p", p);
    struct Rectangle *p = &r1;
    (*p).length = 10;
    printf("%d", r1.length);
    return 0;
}