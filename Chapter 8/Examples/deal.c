#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define true 1
#define false 0

int main(void)
{
    typedef int Bool;

    Bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
    int num_cards, rank, suit;
    const int rank_code[] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a'};
    const int suit_code[] = {'s', 'c', 'd', 'h'};

    srand((unsigned int)time(NULL));

    printf("Enter number of cards in hand: ");
    scanf("%d", &num_cards);
    printf("Your hand:");

    while(num_cards > 0){
        rank = rand() % NUM_RANKS;
        suit = rand() % NUM_SUITS;

        if(!in_hand[suit][rank]){
            in_hand[suit][rank] = true;
            num_cards--;
            printf(" %c%c", rank_code[rank], suit_code[suit]);
        }
    }

    printf("\n");

    return 0;
}
