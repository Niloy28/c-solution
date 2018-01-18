#include<stdio.h>
#include<stdbool.h>

int main(void)
{
    int n, magic_square[99][99] = {[0][2] = 1}, i, j, member;
    bool is_occupied[n][n];

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            is_occupied[i][j] = false;
    for(member = 1, i = 0, j = n / 2; member <= n * n; member++){
        printf("%d %d\n", i, j);
        //printf("%d ", member);
        //printf("%d ", magic_square[i][j]);
        if(is_occupied[i][j]){
            i++;
            magic_square[i][j] = member;
            is_occupied[i][j] = true;
            i--, j++;
            //printf("%d %d\n", i, j);
        }
        else{
            is_occupied[i][j] = true;
            magic_square[i][j] = member;
            //printf("%d %d\n", i, j);
            i--, j++;
        }

        //Checks whether the subscript is out of bounds & fixes it if necessary
        if(i < 0)
            i = n - 1;
        if(j >= n)
            j = 0;
        //printf("%d %d\n", i, j);

    }

    for(printf("\n"), i = 0; i < n; i++, printf("\n"))
        for(j = 0; j < n; j++)
            printf("%d ", magic_square[i][j]);

    return 0;
}
