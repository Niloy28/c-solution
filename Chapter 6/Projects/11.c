#include<stdio.h>

int main(void)
{
    int n;
    float e, denom = 1.0f;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = i; j > 1; j--){
            denom *= j;
        }

        e += 1.0f / denom;
    }

    printf("%f", e);

    return 0;
}
