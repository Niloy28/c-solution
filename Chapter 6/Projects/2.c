#include<stdio.h>

int main(void)
{
    int m, n, div;

    printf("Enter 2 integers: ");
    scanf("%d %d", &m, &n);

    for( ; n != 0; ){
        div = m % n;
        m = n;
        n = div;
    }

    printf("Greatest common divisor: %d", m);

    return 0;
}
