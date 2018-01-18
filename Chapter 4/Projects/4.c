#include<stdio.h>

int main(void)
{
    int input, _1, _2, _3, _4, _5;

    printf("Enter a number between 0 & 32767: ");
    scanf("%d", &input);

    _5 = input % 8;
    input /= 8;
    _4 = input % 8;
    input /= 8;
    _3 = input % 8;
    input /= 8;
    _2 = input % 8;
    input /= 8;
    _1 = input % 8;

    printf("In octal, your number is: %d%d%d%d%d", _1, _2, _3, _4, _5);

    return 0;
}
