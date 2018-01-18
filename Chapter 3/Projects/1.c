#include<stdio.h>

int main(void)
{
    int month, day, year;

    printf("Enter the date in mm/dd/yyyy format: ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("The input in yyyymmdd format: %d0%d%d", year, month, day);

    return 0;
}
