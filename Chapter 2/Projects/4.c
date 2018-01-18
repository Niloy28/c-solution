#include<stdio.h>

int main(void)
{
    float money;

    printf("Enter the amount of money: $");
    scanf("%f", &money);

    printf("With tax: $%.2f", (money + (0.05 * money)));

    return 0;

}
