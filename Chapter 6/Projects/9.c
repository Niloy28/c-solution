#include<stdio.h>

int main(void)
{
    float loan, yearly_interest, monthly_payment, monthly_interest;
    int num_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &yearly_interest);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    printf("Enter number of payments: ");
    scanf("%d", &num_payment);

    monthly_interest = 0.06f / 12.0f;

    for(int i = 1; i <= num_payment; i++){
        loan += loan * monthly_interest;
        loan -= monthly_payment;
        printf("Balance remaining after %d no. payment: $%.2f\n", i, loan);
    }

    return 0;
}
