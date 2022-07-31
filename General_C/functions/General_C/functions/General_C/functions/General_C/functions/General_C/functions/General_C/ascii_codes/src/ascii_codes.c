/*
 ============================================================================
 Name        : ascii_codes.c
 Author      : Seán Ó Fithcheallaigh
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main()
{
	/*
	 * This way requires us to look up the ASCII table, which takes a lot of time.
	char a1 = 65;
	char a2 = 112;
	char a3 = 112;
	char a4 = 108;
	char a5 = 101;
	char a6 = 58;
	char a7 = 41;
	*/

	/*
	 * Instead, we can do this:
	 */
	char a1 = 'A'; // The compiler will convert this to a number in the background
	char a2 = 'p';
	char a3 = 'p';
	char a4 = 'l';
	char a5 = 'e';
	char a6 = ':';
	char a7 = ')';

	// printf("The string is: %c\n", a1); // %c is used for characters
	printf("The string is: %c%c%c%c%c%c%c\n", a1,a2,a3,a4,a5,a6,a7);

	return 0;
}
