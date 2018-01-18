#include<stdio.h>

int main(void)
{
    int numer, denom, dividend, divisor, div_remnant;

    printf("Enter a fraction: ");
    scanf("%d / %d", &numer, &denom);

    divisor = numer, dividend = denom;

    for( ; divisor != 0; ){
        div_remnant = dividend % divisor;
        dividend = divisor;
        divisor = div_remnant;
    }

    if(denom / dividend == 1){
        printf("In lowest term: %d", numer / dividend);
    }
    else{
        printf("In lowest term: %d/%d", numer / dividend, denom / dividend);
    }

    return 0;
}
