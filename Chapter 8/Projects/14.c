#include<stdio.h>
#include<string.h>

#define SIZE 100

int main(void)
{
    char input[SIZE], terminating_char;
    int i, j;

    printf("Enter a sentence: ");
    i = 0;
    while((terminating_char = getchar()) != '.' && terminating_char != '!' && terminating_char != '?')
        if(i < SIZE)
            input[i++] = terminating_char;
    input[i] = '\0';

    printf("Reversal of sentence: ");
    for(i = strlen(input) - 1; i >= 0; i--){
        while(input[i] != ' ' && input[i] != '\0')
            i--;

        for(j = i + 1; input[j] != ' ' && input[j] != '\0'; j++)
            printf("%c", input[j]);
        if(i > 0)
            printf(" ");
    }
    printf("%c\n", terminating_char);

    return 0;
}
