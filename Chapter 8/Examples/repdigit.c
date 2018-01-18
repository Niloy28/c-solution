#include<stdio.h>
#define true 1
#define false 0

int main(void)
{
    typedef int Bool;
    Bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while(n > 0){
        digit = n % 10;
        if(digit_seen[digit])
            break;
        digit_seen[digit] = true;
        n /= 10;
    }

    if(n > 0)
        printf("Repeated digit\n");
    else printf("No repeated digit\n");

    return 0;
}
