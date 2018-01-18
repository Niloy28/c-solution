#include<stdio.h>

int main(void)
{
    int i, count = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &i);

    do{
        i /= 10;
        count++;
    } while(i != 0);

    printf("The number has %d digits.", count);

    return 0;
}
