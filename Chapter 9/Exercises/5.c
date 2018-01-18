#include<stdio.h>

int numDigits(int );

int main(void)
{
    int n;

    scanf("%d", &n);

    printf("Number of digits = %d\n", numDigits(n));

    return 0;
}

int numDigits(int n)
{
    int digit = 0;

    do{
        n /= 10;
        digit++;
    } while(n);

    return digit;
}
