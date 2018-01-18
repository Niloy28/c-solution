/*
 * =====================================================================================
 *
 *       Filename:  11.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/19/2017 10:06:47 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<string.h>

#define SIZE 100

int main(void)
{
	char first_name[SIZE], last_name[SIZE];

	printf("Enter a 1st & last name: ");
	scanf("%s", first_name);
	scanf("%s", last_name);

	printf("%s, %c.\n", last_name, first_name[0]);

	return 0;
}
