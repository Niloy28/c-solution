#include<stdio.h>
#define n 10

int main(void)
{
    int a[n], i;

    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("In reverse order:");
    while(i--){
        printf(" %d", a[i]);
    }
    printf("\n");

    return 0;
}
