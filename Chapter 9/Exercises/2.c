#include<stdio.h>

int check(int , int , int);

int main(void)
{
    int x, y, n;

    scanf("%d %d %d", &x, &y, &n);

    return check(x, y, n);
}

int check(int x, int y, int n)
{
    if(x >= 0 && x <= n - 1){
        if(y >= 0 && y <= n - 1)
            return 1;
    }
    return 0;
}
