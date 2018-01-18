#include<stdio.h>
#include<stdbool.h>

bool isPrime(int n);

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isPrime(n))
        printf("%d is prime.\n", n);
    else printf("%d is not prime.\n", n);

    return 0;
}

bool isPrime(int n)
{
    int divisor;

    if(n <= 1)
        return false;
    for(divisor = 2; divisor * divisor <= n; divisor++){
        if(n % divisor == 0)
            return false;
    }
    return true;
}
