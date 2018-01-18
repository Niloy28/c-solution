#include<stdio.h>

int main(void)
{
    unsigned long long int i, n, square;

    printf("Enter a number: ");
    scanf("%lld", &n);

    for(i = 1; i * i <= n; i++){
        square = i * i;

        if(square % 2 == 0){
            printf("%lld\n", square);
        }
        else continue;
    }

    return 0;
}
