#include<stdio.h>

#define N 10

void quickSort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(void)
{
    int a[N], i;

    printf("Enter %d numbers: ", N);
    for(i = 0; i < N; i++)
        scanf("%d", &a[i]);

    quicksort(a, 0, N - 1);

    printf("In sorted order: ");
    for(i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}

void quickSort(int a[], int low, int high)
{
    if(low >= high)
        return;
    middle = split(a, low, high);
    quickSort(a, 0, middle);
    quickSort(a, middle, n - 1);
}

int split(int a[], int low, int high)
{

}
