#include<stdio.h>

int main(void)
{
    int i = 1, j = 2, k = 3;

    //printf("%d %d", i / j, i % j);
    //printf("%d", (i + 10) % j);
    //printf("%d", (i + 10) % k / j);
    printf("%d", (i + 5) % (j + 2) / k);

    return 0;
}
