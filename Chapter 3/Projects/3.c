#include<stdio.h>

int main(void)
{
    int prefix, grp_id, publisher_code, item_num, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &grp_id, &publisher_code, &item_num, &check_digit);

    printf("GSI Prefix: %d\n", prefix);
    printf("Group Identifier: %d\n", grp_id);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", item_num);
    printf("Check digit: %d\n", check_digit);

    return 0;
}
