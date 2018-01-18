#include<stdio.h>

#define HRS 24
#define DAYS 30

int main(void)
{
    float temp_readings[DAYS][HRS];
    double avg_temp;
    int i, j;

    for(i = 0; i < DAYS; i++)
        for(j = 0; j < HRS; j++)
            scanf("%f", &temp_readings[i][j]);

    for(i = 0, avg_temp = 0; i < DAYS; i++)
        for(j = 0; j < HRS; j++)
            avg_temp += temp_readings[i][j];

    printf("Average temp. for the month: %.3f\n", avg_temp / (DAYS * HRS));

    return 0;
}
