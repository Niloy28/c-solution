#include<stdio.h>

void printCount(int n);

int main(void)
{
    int i;

    for(i = 10; i >= 0; i--)
        printCount(i);

    return 0;
}

void printCount(int n)
{
    printf("T minus %d and counting.\n", n);
}
