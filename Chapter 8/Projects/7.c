#include<stdio.h>

#define SIZE 5
#define ROW_INDEX 0
#define COL_INDEX 1

int main(void)
{
    int input[SIZE][SIZE], sum[2][SIZE] = {0}, i, j;

    for(i = 0; i < SIZE; i++){
        printf("Enter row %d: ", i + 1);

        for(j = 0; j < SIZE; j++)
            scanf("%d", &input[i][j]);
    }

    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            sum[ROW_INDEX][i] += input[i][j];
            sum[COL_INDEX][j] += input[i][j];
        }
    }

    printf("Row totals: ");
    for(i = 0; i < SIZE; i++)
        printf("%d ", sum[ROW_INDEX][i]);
    printf("\nColumn totals: ");
    for(i = 0; i < SIZE; i++)
        printf("%d ", sum[COL_INDEX][i]);

    return 0;
}
