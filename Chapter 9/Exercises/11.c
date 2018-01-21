#include<stdio.h>

#define SIZE 50

float compute_GPA(char grades[], int n);

int main(void)
{
    char grades[SIZE];
    int n, i;

    printf("Enter no. of grades to average: ");
    scanf("%d", &n);
    printf("Enter %d grades in alphabetic form: ", n);
    for(i = 0; i < n; i++)
        scanf(" %c", &grades[i]);

    printf("The average GPA is: %.2f\n", compute_GPA(grades, n));

    return 0;
}

float compute_GPA(char grades[], int n)
{
    float total;
    int i;

    for(i = total = 0; i < n; i++){
        switch(grades[i]){
            case 'A':
            case 'a': total += 4; break;
            case 'B':
            case 'b': total += 3; break;
            case 'C':
            case 'c': total += 2; break;
            case 'D':
            case 'd': total += 1; break;
            case 'F':
            case 'f':
            default: break;
        }
    }

    return total / n;
}
