#include <stdio.h>

// Step 1: define the function
unsigned long long explode(unsigned int m, unsigned short n)
{
    return (unsigned long long)m << n;
}

// Step 2: test it
int main()
{
    unsigned int m = 3;
    unsigned short n = 4;

    unsigned long long result = explode(m, n);

    printf("Result of %u * 2^%u = %llu\n", m, n, result);
    return 0;
}

/*
3 in binary = 00000011 ---> 00001100 shift left by 2 bits 
equivalent to: a × 2ⁿ
*/