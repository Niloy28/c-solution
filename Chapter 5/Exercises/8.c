#include<stdio.h>

int main(void)
{
    int age;

    printF("Enter your age: ");
    scanf("%d", &age);

    printf("%s", (age >= 13 && age <= 19) ? "true" : "false");

    return 0;
}
