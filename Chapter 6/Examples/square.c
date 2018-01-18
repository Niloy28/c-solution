#include<stdio.h>

int main(void)
{
    int i = 1, n;

    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    while(i <= n){
        printf("\t%d\t%d\n", i++, i*i);
    }

    return 0;
}
