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
