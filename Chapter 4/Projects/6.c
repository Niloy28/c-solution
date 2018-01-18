#include<stdio.h>

int main(void)
{
    int _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, first_sum, second_sum, total;

    printf("Enter the EAN: ");
    scanf("%1d %1d %1d %1d %1d %1d %1d %1d %1d %1d %1d %1d", &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, &_10, &_11, &_12);

    first_sum = _2 + _4 + _6 + _8 + _10 + _12;
    second_sum = _1 + _3 + _5 + _7 + _9 + _11;
    total = first_sum * 3 + second_sum;
    total -= 1;
    total %= 10;
    total = 9 - total;

    printf("Check digit: %d", total);

    return 0;
}
