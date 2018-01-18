#include<stdio.h>

int main(void)
{
    int i, n, c;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in the table: ");
    scanf("%d", &n);

    for(i = 1, c = 1; i <= n; ){
        if(c <= 24){
            printf("\t%d\t%d\n", i, i*i);
            c++;
            i++;
        }
        else do{
            printf("Press Enter to continue...\n");
            c = 1;
        }while(getchar() != '\n');

    }

    return 0;
}
