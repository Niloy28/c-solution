#include<stdio.h>

int main(void)
{
    int hour, minute;
    char a_or_p = 'A';

    printf("Enter the time in 24-hour format: ");
    scanf("%d : %d", &hour, &minute);

    if(hour > 12){
        hour -= 12;
        a_or_p = 'P';
    }
    else if(hour == 0){
        hour = 12;
    }

    printf("Equivalent 12-hour time: %.2d:%.2d %cM", hour, minute, a_or_p);

    return 0;
}
