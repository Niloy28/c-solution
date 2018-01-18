#include<stdio.h>

#define SIZE 50

int i;

int largest(int [], int );
float average(int [], int );
int positive(int [], int );

int main(void)
{
    int a[SIZE], n;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Largest = %d\n", largest(a, n));
    printf("Mean = %.3f\n", average(a, n));
    printf("No. of positive numbers = %d\n", positive(a, n));

    return 0;
}

int largest(int a[], int n)
{
    int largest;

    for(i = 0, largest = a[i]; i < n; i++)
        if(a[i] > largest)
            largest = a[i];

    return largest;
}

float average(int a[], int n)
{
    float sum;

    for(i = 0, sum = 0; i < n; i++)
        sum += a[i];

    return sum / n;
}

int positive(int a[], int n)
{
    int count;

    for(i = 0, count = 0; i < n; i++)
        if(a[i] >= 0)
            count++;

    return count;
}
