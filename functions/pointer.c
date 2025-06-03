#include <stdio.h>

struct Student
{
    int class;
    int year;
    int age;
};


int main() {
    int test = 20;
    struct Student s;
    struct Student *p;
    p = &s;
    int *pointer = &test;
    s.age= 20;
    (*p).class = 10;
    p->year = 1990;
    printf("%lu \n", sizeof(s));
    printf("%lu \n", sizeof(p));
    printf("%lu \n", sizeof(pointer));
    printf("%p\n", pointer);
    printf("%p \n", p);
    printf("%d \n", *pointer);
    printf("%d, %d",s.year, s.class);

    return 0;
}

