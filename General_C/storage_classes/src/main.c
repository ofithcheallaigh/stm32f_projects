/*
 ============================================================================
 Name        : storage_classes.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

void file1_func(void);

int mainPrivateData;

int main()
{
	mainPrivateData = 100;

	printf("mainPrivateData = %d\n", mainPrivateData);

	file1_func();

	printf("mainPrivateData = %d\n", mainPrivateData);

	return 0;
}
