#include<stdio.h>

int main(void)
{
    int money, _20, _10, _5, _1;

    printf("Enter the amount of money: ");
    scanf("%d", &money);

    _20 = money / 20;
    money -= _20 * 20;
    _10 = money / 10;
    money -= _10 * 10;
    _5 = money /5;
    money -= _5 * 5;
    _1 = money;

    printf("$20 bills: %d\n", _20);
    printf("$10 bills: %d\n", _10);
    printf("$5 bills: %d\n", _5);
    printf("$1 bills: %d\n", _1);

    return 0;
}
