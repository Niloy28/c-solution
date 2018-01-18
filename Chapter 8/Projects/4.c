#include<stdio.h>

#define SIZE 5
#define ARRAY_LENGTH sizeof(a) / sizeof(a[0])

int main(void)
{
    int a[SIZE], i;

    printf("Enter %d numbers: ", SIZE);
    for(i = 0; i < ARRAY_LENGTH; i++)
        scanf("%d", &a[i]);

    printf("In reverse order: \n");
    for(i = ARRAY_LENGTH - 1; i >= 0; i--){
        printf("%d ", a[i]);
    }

    return 0;
}
