#include<stdio.h>

int main(void)
{
    ///Declaring the required variables.
    int mark, hundredth, tenth, oneth;

    ///Takes input from user.
    printf("Enter numerical grade: ");
    scanf("%d", &mark);

    ///Checks if the input is within valid range.
    if(mark > 100 || mark < 0){
        printf("Invalid input.");
        goto terminate;
    }

    ///Dividing the input into digits.
    hundredth = mark / 100;
    tenth = mark / 10;
    oneth = mark - (tenth * 10);

    ///Prints the respective letter grade.
    printf("Letter grade: ");
    switch(hundredth){
        case 1: printf("A"); break;
        case 0:
            switch(tenth){
                case 1:
                case 2:
                case 3:
                case 4:
                case 5: printf("F"); break;
                case 6: printf("D"); break;
                case 7: printf("C"); break;
                case 8: printf("B"); break;

            }
        default: break;
    }

    terminate: return 0;
}
