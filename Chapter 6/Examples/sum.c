#include<stdio.h>

int main(void)
{
    int i, sum = 0;

    printf("This programs sums a series of integers.\n");
    printf("Enter integers(0 to terminate): ");

    scanf("%d", &i);
    while(i){
        sum += i;
        scanf("%d", &i);
    }

    printf("The sum is: %d", sum);

    return 0;
}
