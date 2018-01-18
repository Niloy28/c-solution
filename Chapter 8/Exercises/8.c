#include<stdio.h>

#define HRS 24
#define DAYS 30

int main(void)
{
    float temp_readings[DAYS][HRS];
    int i, j;

    for(i = 0; i < DAYS; i++)
        for(j = 0; j < HRS; j++)
            scanf("%f", &temp_readings[i][j]);

    return 0;
}
