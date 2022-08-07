#include <stdio.h>
#include "maths.h" // This is how we include a user defined header file

int main(void)
{
    printf("Add: %d\n", maths_add(0x0FFF1111, 0x0FFF1111));

    return 0;
}