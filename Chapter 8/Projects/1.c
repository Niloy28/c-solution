/*
 * =====================================================================================
 *
 *       Filename:  1.c
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

#define MIN_DIGIT_REPEAT 2
#define true 1
#define false 0

int main(void)
{
	typedef int Bool;
	
	Bool repeated_digit[10] = {false};
	int digit, digit_seen[10] = {0};
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while(n){
		digit = n % 10;

		digit_seen[digit]++;

		if(digit_seen[digit] >= MIN_DIGIT_REPEAT)
			repeated_digit[digit] = true;

		n /= 10;
	}

	printf("Numbers repeated at least %d times: ", MIN_DIGIT_REPEAT);

	for(digit = 0; digit <= 9; digit++){
		if(repeated_digit[digit]){
			printf("%d ", digit);
		}
	}

	printf("\n");

	return 0;
}
