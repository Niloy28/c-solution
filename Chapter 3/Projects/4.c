#include<stdio.h>

int main(void)
{
    int _1, _2, _3;

    printf("Enter telephone number[(xxx) xxx-xxxx] : ");
    scanf("(%d) %d-%d", &_1, &_2, &_3);

    printf("You entered %d.%d.%d", _1, _2, _3);

    return 0;
}
