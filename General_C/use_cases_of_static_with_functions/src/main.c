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


/*
 * If we only want to be able to call this function from within the main.c file
 * we need to use the 'static' keyword in front of the function.
 *
 * A static function is also known as a private function
 */
static void change_system_clock(int system_clock)
{
	printf("System Clock changed to: %d\n", system_clock);
}
