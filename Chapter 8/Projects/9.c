#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>

#define SIZE 10

int main(void)
{
    char random_walk[SIZE][SIZE];
    bool is_period[SIZE][SIZE];
    int i, j, letter_count, direction;

    for(i = 0; i < SIZE; i++)
        for(j = 0; j < SIZE; j++)
            random_walk[i][j] = '.', is_period[i][j] = true;
    srand(time(NULL));

    for(i = j = letter_count = 0; ; ){
        random_walk[i][j] = 'A' + letter_count;

        direction = rand() % 4;
        switch(direction){
            case 0: i--; break;
            case 1: j++; break;
            case 2: i++; break;
            case 3: j--; break;
        }
        if((i < 0 || i >= SIZE) || (j < 0 || j >= SIZE) || !is_period[i][j])
    }
}
