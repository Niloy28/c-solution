#include<stdio.h>

int main(void)
{
    float loan, yearly_interest, monthly_payment, monthly_interest, i = 0;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &yearly_interest);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    monthly_interest = 0.06f / 12.0f;

    loan += loan * monthly_interest;
    loan -= monthly_payment;
    printf("Balance remaining after first payment: $%.2f\n", loan);
    loan += loan * monthly_interest;
    loan -= monthly_payment;
    printf("Balance remaining after second payment: $%.2f\n", loan);
    loan += loan * monthly_interest;
    loan -= monthly_payment;
    printf("Balance remaining after third payment: $%.2f\n", loan);

    return 0;
}
