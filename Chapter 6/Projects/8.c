#include<stdio.h>

int main(void)
{
    int day_month, day_week, day_counter;

    printf("Enter number of days in month: ");
    scanf("%d", &day_month);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &day_week);

    day_counter = day_week;

    while(--day_week){
        printf("\t");
    }

    for(int i = 1; i <= day_month; i++, day_counter++){
        if(day_counter > 7){
            printf("\n");
            day_counter = 1;
        }

        printf("%d\t", i);
    }

    return 0;
}
