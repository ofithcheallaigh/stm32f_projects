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

	printf("Enter 3 numbers:\n");
	scanf("%f %f %f", & number1, &number2, &number3);

	average = (number1 + number2 + number3)/3;

	printf("The average is: %f\n", average);

	while(getchar() != '\n')
	{

	}
	getchar();

}

