#include<stdio.h>
#define true 1
#define false 0

int main(void)
{
    typedef int Bool;

    int hour, minute, diff[8];
    unsigned short i;
    Bool closest[8] = {false};
    const int time[] = {800, 943, 1119, 1247, 1400, 1545, 1900, 2145};
    const ch[][] = {('0', '8', ':', '0', '0', 'a', 'm', '1', '0', ':', '1', '6', 'a', 'm'),
                    ('0', '9', ':', '4', '3', 'a', 'm'),
                    (}

    printf("Enter a 24-hour time: ");
    scanf("%d : %d", &hour, &minute);

    for(i = 0; i < 8; i++){
        diff[i] = (hour * 100) + minute - time[i];
    }

    for(i = 0; i < 8; i++){
        if(diff[i] > diff[i + 1]){
            closest[i + 1] = true;
            closest[i] = false;
        }
        else if(diff[i] < diff[i + 1])
            closest[i] = true;
    }
}
