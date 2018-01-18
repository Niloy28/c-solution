#include<stdio.h>

int main(void)
{

    int input, digit[50], i = 0, j = 0;

    printf("Enter a number: ");
    scanf("%d", &input);

    do{
        digit[i] = input % 10;
        input = input / 10;
        i++, j++;
    }while(input > 0);

    for(printf("The number after reversal is: "), i = 0; j - 1 >= 0; i++, j--){
        printf("%d", digit[i]);
    }

    return 0;

}
