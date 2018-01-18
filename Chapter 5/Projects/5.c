#include<stdio.h>

int main(void)
{
    float income, tax;

    printf("Enter your income: ");
    scanf("%f", &income);

    if(income <= 750){
        tax = 7.5f + 0.01f * income;
    }
    else if(income <= 2250){
        tax = 7.5f + 0.02 * income;
    }
    else if(income <= 3750)
}
