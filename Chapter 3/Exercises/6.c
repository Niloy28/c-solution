#include<stdio.h>

int main(void)
{
    int num1, num2, denom1, denom2, result_num, result_denom;

    printf("Enter the 1st fraction with spaces before & after /: ");
    scanf("%d / %d", &num1, &denom1);

    printf("Enter the 2nd fraction with spaces before & after /: ");
    scanf("%d / %d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("The resultant fraction is %d/%d", result_num, result_denom);

    return 0;
}
