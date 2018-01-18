#include<stdio.h>
#include<stdbool.h>

int main(void)
{
    bool weekend[7] = {[0] = true, [6] = true};
    int i;

    for(i = 0; i < 7; i++)
        printf("%d\n", weekend[i]);

    return 0;
}
