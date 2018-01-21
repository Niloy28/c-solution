#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>

#define SIZE 10

int main(void)
{
    char random_walk[SIZE][SIZE];
    bool is_period[SIZE][SIZE];
    int i, j, prev_i, prev_j, letter_count, direction, ways_blocked;

    for(i = 0; i < SIZE; i++)
        for(j = 0; j < SIZE; j++){
            random_walk[i][j] = '.';
            is_period[i][j] = true;
        }
    srand(time(NULL));

    for(i = j = letter_count = ways_blocked = 0; letter_count <= 25; letter_count++, ways_blocked = 0){
        random_walk[i][j] = 'A' + letter_count;
        is_period[i][j] = false;
        //Stores the previous position
        prev_i = i;
        prev_j = j;

        //Generates a number between 0-3, where 0=up, 1=right, 2=down, 3=left
        direction = rand() % 4;

        place_letter:
            if(ways_blocked >= 4)
                break;
            switch(direction){
                case 0: i--; break;
                case 1: j++; break;
                case 2: i++; break;
                case 3: j--; break;
            }
            if(!is_period[i][j]){
                i = prev_i;
                j = prev_j;

                direction++;
                ways_blocked++;
                if(direction >= 4)
                    direction = 0;

                goto place_letter;
            }
            if(i < 0){
                i = prev_i;
                direction++;
                ways_blocked++;
                if(direction >= 4)
                    direction = 0;

                goto place_letter;
            }
            else if(i >= SIZE){
                i = prev_i;
                direction++;
                ways_blocked++;
                if(direction >= 4)
                    direction = 0;

                goto place_letter;
            }
            if(j < 0){
                j = prev_j;
                direction++;
                ways_blocked++;
                if(direction >= 4)
                    direction = 0;

                goto place_letter;
            }
            else if(j >= SIZE){
                j = prev_j;
                direction++;
                ways_blocked++;
                if(direction >= 4)
                    direction = 0;

                goto place_letter;
            }
    }

    for(i = 0; i < SIZE; i++, printf("\n"))
        for(j = 0; j < SIZE; j++)
        printf("%2c", random_walk[i][j]);

    return 0;
}
