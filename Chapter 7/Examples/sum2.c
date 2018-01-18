#include<stdio.h>

int main(void)
{
    long i, sum = 0;

    printf("This programs sums a series of integers.\n");
    printf("Enter integers(0 to terminate): ");

    scanf("%ld", &i);
    while(i){
        sum += i;
        scanf("%ld", &i);
    }

    printf("The sum is: %ld", sum);

    return 0;
}
