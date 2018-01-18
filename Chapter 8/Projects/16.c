#include<stdio.h>
#include<ctype.h>

int main(void)
{
    int letter_seen[26] = {0}, i;
    char c;

    printf("Enter first word: ");
    while((c = getchar()) != '\n'){
        if(isalpha(c)){
            i = (int)tolower(c) - (int)'a';
            letter_seen[i]++;
        }
    }
    printf("Enter second word: ");
    while((c = getchar()) != '\n'){
        if(isalpha(c)){
            i = (int)tolower(c) - (int)'a';
            letter_seen[i]--;
        }
    }
    for(i = 0; i < 26; i++){
        if(letter_seen[i]){
            printf("The words are not anagrams.\n");
            return 0;
        }
    }
    printf("The words are anagrams.\n");

    return 0;
}
