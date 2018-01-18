#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define SIZE 80

int main(void)
{
    char msg[SIZE];
    int shift, i;

    printf("Enetr message to be encrypted: ");
    gets(msg);
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);
}
