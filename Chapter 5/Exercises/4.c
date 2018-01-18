#include<stdio.h>

int main(void)
{
    int i, j, k;

    printf("Enter value of i & j: ");
    scanf("%d %d", &i, &j);

    k = (i > j || i < j) ? 1 : 0;
    printf("%d", i < j ? (-1) : k);

    return 0;
}
