/*
 * =====================================================================================
 *
 *       Filename:  9.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  09/19/2017 09:34:33 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */

#include<stdio.h>

int main(void)
{
	unsigned int hour, minute;
	char notation;

	printf("Enter a 12-hour time: ");
	scanf("%u : %u %1c", &hour, &minute, &notation);

	if(notation == 'p' || notation == 'P')
		hour += 12;
    else if(notation == 'a' || notation == 'A')
        if(hour == 12)
            hour = 0;

    if(hour >= 24)
        hour = 12;

	printf("Equivalent 24-hour time: %.2u:%.2u\n", hour, minute);

	return 0;
}
