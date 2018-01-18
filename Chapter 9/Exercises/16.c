#include<stdio.h>

unsigned long fact(unsigned int );

int main(void)
{
    unsigned int n;

    scanf("%u", &n);

    printf("Factorial = %ld\n", fact(n));

    return 0;
}

unsigned long fact(unsigned int n)
{
    return n == 1 ? 1 : n * fact(n - 1);
}
