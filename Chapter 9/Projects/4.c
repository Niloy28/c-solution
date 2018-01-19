#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void)
{
    int counts1[26] = {0}, counts2[26] = {0};

    printf("Enter first word: ");
    read_word(counts1);
    printf("Enter second word: ");
    read_word(counts2);

    if(equal_array(counts1, counts2))
        printf("The words are anagrams.\n");
    else printf("The words are not anagrams.\n");

    return 0;
}

void read_word(int counts[26])
{
    char c;
    int i;

    while((c = getchar()) != '\n'){
        if(isalpha(c))
            i = (int)tolower(c) - (int)'a';
        counts[i]++;
    }
}

bool equal_array(int counts1[26], int counts2[26])
{
    int i;

    for(i = 0; i < 26; i++)
        if(counts1[i] != counts2[i])
            return false;

    return true;
}
