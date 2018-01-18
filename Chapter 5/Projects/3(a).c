#include<stdio.h>

int main(void)
{
    float share, share_price, commission, value;

    printf("Enter the number of shares: ");
    scanf("%f", &share);
    printf("Enter the price per share: ");
    scanf("%f", &share_price);

    value = share_price * share;

    if(value < 2500.0f)
        commission = 30.0f + 0.017f * value;
    else if(value < 6250.0f)
        commission = 56.0f + 0.0066f * value;
    else if(value < 20000.0f)
        commission = 76.0f + 0.0034f * value;
    else if(value < 50000.0f)
        commission = 100.0f + 0.0022f * value;
    else if(value < 500000.0f)
        commission = 155.0f + 0.0011f * value;
    else if(value > 500000.0f)
        commission = 255.0f + .0009f * value;

    if(commission < 39.0f)
        commission = 39.0f;

    printf("Commission: $%.2f", commission);

    return 0;
}
