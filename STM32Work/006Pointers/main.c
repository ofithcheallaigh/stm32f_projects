/*
 * main.c
 *
 *  Created on: 27 Nov 2022
 *      Author: ofith
 *
 *	1. Create a char type variable and init to the value of 100
 *	2. Print the address of the above variable
 *	3. Create a pointer variable and store the address of the above variable
 *	4. Perform read operation on the pointer variable to fetch 1 byte of data from the pointer
 *	5. Print the data obtained from the read operation on the pointer
 *	6. Perform write operation on the pointer to store the value 65
 *	7. Print the value of the variable defined in step 1
 */

#include<stdio.h>

int main(void)
{
	char data = 100;
	printf("The value of the data is: %d\n", data);
	printf("Address of the variable data is: %p\n", &data);

	// Create a pointer variable and store the address of "data" variable
	char* pAddress = &data;

	// Perform read operation to fetch 1 byte of data
	char value = *pAddress;
	printf("Read value is: %d", value);

	// Perform write operation on pointer to store value 65
	*pAddress = 65;

	// Print value of variable defined in step 1
	printf("\nThe value of the data is: %d\n", data);

}
