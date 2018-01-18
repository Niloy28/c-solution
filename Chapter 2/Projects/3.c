#include<stdio.h>
#define PI 3.1416

int main(void)
{
    int r;

    printf("Enter the radius of the sphere: ");
    scanf("%d", &r);

    printf("%.3f", ((4.0f/3.0f)*PI*r*r*r));

    return 0;
}
