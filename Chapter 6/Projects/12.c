#include<stdio.h>

int main(void)
{
    float e, denom = 1.0f, term;

    printf("Enter the smallest possible term in the series: ");
    scanf("%f", &term);

    for(int i = 1; i <= n; i++){
        for(int j = i; j > 1; j--){
            denom *= j;
        }

        e += 1.0f / denom;
    }

    printf("%f", e);

    return 0;
}
