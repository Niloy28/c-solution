#include<stdio.h>

int main(void)
{
    /*
    int input, last_digit, first_digit;

    printf("Enter a 2 digit number: ");
    scanf("%d", &input);

    first_digit = input / 10;
    last_digit = input % 10;

    printf("The reversal is: %d%d", last_digit, first_digit);

    return 0;
    */

    int input_1, input_2;

    printf("Enter a 2 digit number: ");
    scanf("%1d %1d", &input_1, &input_2);

    printf("The reversal is: %d%d", input_2, input_1);

    return 0;
}
