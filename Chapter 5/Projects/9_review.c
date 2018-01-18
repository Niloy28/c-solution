#include<stdio.h>

#define EARLIER 1
#define LATER 2

int main(void)
{
    int month1, day1, year1, month2, day2, year2, date1;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d / %d / %d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d / %d / %d", &month2, &day2, &year2);

    if(year1 < year2){
        date1 = EARLIER;
    }
    else if(year1 > year2){
        date1 = LATER;
    }
    else{
        if(month1 < month2){
            date1 = EARLIER;
        }
        else if(month1 > month2){
            date1 = LATER;
        }
        else{
            if(day1 > day2){
                date1 = EARLIER;
            }
            else if(day1 > day2){
                date1 = LATER;
            }
        }
    }

    switch(date1){
        case 1: printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month1, day1, year1, month2, day2, year2); break;
        case 2: printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month2, day2, year2, month1, day1, year1); break;
        default: printf("Both the dates are same.");
    }

    return 0;
}
