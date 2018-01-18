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
    int i;
    unsigned long fact;

    for(i = 1, fact = 1; i <= n; i++)
        fact *= i;

    return fact;
}
