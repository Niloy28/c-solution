/*
 * =====================================================================================
 *
 *       Filename:  10.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  09/19/2017 09:44:28 PM
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
	char string[SIZE];
	int vow_count, i, j;
	const char vowel[12] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

	printf("Enter a sentence: ");
	fgets(string, SIZE, stdin);

	for(i = 0, vow_count = 0; i < strlen(string); i++){
		for(j = 0; j < 12; j++){
			if(string[i] == vowel[j]){
				vow_count++;
				break;
			}
		}
	}

	printf("Your sentence contains %d vowels.\n", vow_count);

	return 0;
}
