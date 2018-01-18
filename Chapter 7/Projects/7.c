#include<stdio.h>

int main(void)
{
    int num1, num2, denom1, denom2, result_num, result_denom;
    int divisor, dividend, temp;
    char operation;

    printf("Enter the fractions with an operator between them: ");
    scanf("%d / %d %c %d / %d", &num1, &denom1, &operation, &num2, &denom2);

    switch(operation){
        case '+': result_num = num1 * denom2 + num2 * denom1;
                  result_denom = denom1 * denom2;
                  break;
        case '-': result_num = num1 * denom2 - num2 * denom1;
                  result_denom = denom1 * denom2;
                  break;
        case '*': result_num = num1 * num2;
                  result_denom = denom1 * denom2;
                  break;
        case '/': result_num = num1 / num2;
                  result_denom = denom1 / denom2;
                  break;
    }

    divisor = result_num, dividend = result_denom;
    if(divisor > dividend){
        temp = divisor;
        divisor = dividend;
        dividend = temp;
    }
    while(dividend % divisor){
        temp = divisor;
        divisor = dividend % divisor;
        dividend = temp;
    }
    printf("The resultant fraction is %d/%d\n", result_num / divisor, result_denom / divisor);

    return 0;
}
