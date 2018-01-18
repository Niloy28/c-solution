#include<stdio.h>

int main(void)
{
    char checker_board[8][8];
    int i, j;

    for(i = 0; i < 8; i++, printf("\n")){
        for(j = 0; j < 8; j++, printf(" ")){
            if((i + j) % 2)
                printf("R");
            else printf("B");
        }
    }

    return 0;
}
