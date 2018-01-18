#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define SIZE 100

int main(void)
{
    char input[SIZE];
    int i = 0;

    gets(input);
    while(input[i]){
        switch(input[i]){
            case 'a':
            case 'A': input[i] = '4'; break;
            case 'b':
            case 'B': input[i] = '8'; break;
            case 'e':
            case 'E': input[i] = '3'; break;
            case 'i':
            case 'I': input[i] = '1'; break;
            case 'o':
            case 'O': input[i] = '0'; break;
            case 's':
            case 'S': input[i] = '5'; break;
            default: break;
        }
        printf("%c", toupper(input[i]));

        i++;
    }
    for(i = 1; i <= 10; i++)
        printf("!");
    printf("\n");

    return 0;
}
