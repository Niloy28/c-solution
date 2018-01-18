#include<stdio.h>

int gcd(int , int );

int main(void)
{
    int m, n;

    scanf("%d %d", &m, &n);

    printf("GCD = %d\n", gcd(m, n));

    return 0;
}

int gcd(int m, int n)
{
    int temp;

    if(m < n){
        temp = m;
        m = n;
        n = temp;
    }
    while(m % n){
        temp = n;
        n = m % n;
        m = temp;
    }

    return n;
}
