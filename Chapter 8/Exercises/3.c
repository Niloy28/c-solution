#include<stdio.h>

#define true 1
#define false 0

int main(void)
{
    typedef int Bool;

    Bool weekend[7] = {false};
    int i;
    weekend[0] = weekend[6] = true;

    for(i = 0; i < 7; i++)
        printf("%d\n", weekend[i]);

    return 0;
}
