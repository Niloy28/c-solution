#include<stdio.h>

#define true 1
#define false 0

typedef int Bool;

int dayOfYear(int ,int ,int );

int main(void)
{
    int day, month, year;

    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%d / %d / %d", &day, &month, &year);

    printf("The day of the year is %d\n", dayOfYear(day, month, year));

    return 0;
}

int dayOfYear(int day, int month, int year)
{
    Bool isLeapYear;
    int i, totalDay;
    int perMonth[12][2] = {{1, 31},
                           {2, 28},
                           {3, 31},
                           {4, 30},
                           {5, 31},
                           {6, 30},
                           {7, 31},
                           {8, 31},
                           {9, 30},
                           {10, 31},
                           {11, 30},
                           {12, 31}};

    if((year % 4) == 0 && (year % 100 != 0 || year % 400 == 0))
        isLeapYear = true;
    else isLeapYear = false;

    if(month > 2 && isLeapYear)
        day++;

    for(i = 0, totalDay = 0; i < month - 1; i++)
        totalDay += perMonth[i][1];

    return totalDay + day;
}
