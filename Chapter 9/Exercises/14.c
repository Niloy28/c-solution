#include<stdio.h>
#include<stdbool.h>

bool has_zero(int a[], int n);

int main(void)
{
    int n, a[n], i;

    printf("Enter no. of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Enter no. %d value of a: ", i + 1);
        scanf("%d", &a[i]);
    }

    if(has_zero(a, n))
        printf("The array contains at least one zero.\n");
    else printf("The array contains no zeros.\n");

    return 0;
}

bool has_zero(int a[], int n)
{
    int i;

    for(i = 0; i < n; i++)
        if(a[i] == 0)
            return true;

    return false;

}
