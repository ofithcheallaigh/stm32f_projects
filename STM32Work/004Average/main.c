/*
 * main.c
 *
 *  Created on: Nov 26, 2022
 *      Author: ofith
 */
#include <stdio.h>
int main(void)
{
	float number1, number2, number3;
	float average;

	printf("Enter the first number:\n");
	fflush(stdout);
	scanf("%f", &number1);
	printf("\nEnter the second number:\n");
	fflush(stdout);
	scanf("%f", &number2);
	printf("\nEnter the third number:\n");
	fflush(stdout);
	scanf("%f", &number3);

	average = (number1 + number2 + number3)/3;

	printf("The average is: %f\n", average);

	while(getchar() != '\n')
	{

	}
	getchar();

}



