#include<stdio.h>

int digit(int , int );

int main(void)
{
    int n, k;

    scanf("%d %d", &n, &k);

    printf("The %dth digit = %d\n", k, digit(n, k));

    return 0;
}

int digit(int n, int k)
{
    while(--k){
        n /= 10;
    }

    return n % 10;
}
