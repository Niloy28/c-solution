#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define SIZE 80

int main(void)
{
    char msg[SIZE];
    int shift, i;

    printf("Enter message to be encrypted: ");
    gets(msg);
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    printf("Encrypted message: ");
    for(i = 0; msg[i]; i++){
        if(isalpha(msg[i])){
            if(isupper(msg[i]))
                printf("%c", ((msg[i] - 'A' + shift) % 26) + 'A');
            else if(islower(msg[i]))
                printf("%c", ((msg[i] - 'a' + shift) % 26) + 'a');
        }
        else printf("%c", msg[i]);
    }
    printf("\n");

    return 0;
}
