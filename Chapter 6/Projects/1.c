#include<stdio.h>

int main(void)
{
    float i = 0.0f, temp;

    for( ; ; ){
        printf("Enter a number: ");
        scanf("%f", &temp);

        if(!temp){
            break;
        }

        if(temp > i){
            i = temp;
        }
        else continue;
    }

    printf("The largest number entered was %.3f", i);

    return 0;
}
