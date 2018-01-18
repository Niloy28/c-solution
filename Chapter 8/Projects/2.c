/*
 * =====================================================================================
 *
 *       Filename:  2.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  09/21/2017 10:13:25 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */

#include<stdio.h>

#define true 1
#define false 0

int main(void)
{
	int digit, digit_seen[10] = {0};
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while(n){
		digit = n % 10;
		digit_seen[digit]++;
		n /= 10;
	}

	printf("%-12s\t", "Digit:");
	for(digit = 0; digit <= 9; digit++){
        printf("%d\t", digit);
	}
	printf("\n%-12s\t", "Occurrences:");
	for(digit = 0; digit <= 9; digit++){
		printf("%d\t", digit_seen[digit]);
	}

	printf("\n");

	return 0;
}
