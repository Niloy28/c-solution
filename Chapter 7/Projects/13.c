/*
 * =====================================================================================
 *
 *       Filename:  13.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  09/19/2017 10:21:42 PM
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
#define true 1
#define false 0

int main(void)
{
	typedef int Bool;

	Bool sentence_start = false;
	char string[SIZE];
	int i = 0, letter_count = 0, word_count = 0;

	printf("Enter a sentence: ");
	fgets(string, SIZE, stdin);

	while(string[i] != '\n'){
		if(string[i] == ' ' && sentence_start == false){
            i++;
            continue;
		}
		else if(string[i] != ' '){
			sentence_start = true;
			letter_count++;
		}
		else word_count++;

		i++;
	}

	printf("Average word length: %.1f\n", (double)letter_count / ++word_count);

	return 0;
}
