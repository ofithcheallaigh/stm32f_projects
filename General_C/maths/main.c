#include <stdio.h>
#include "maths.h" // This is how we include a user defined header file

int main(void)
{
    printf("Add (decimal): %d\n", maths_add(0x0FFF1111, 0x0FFF1111));
    printf("Add (hex): %X\n", maths_add(0x0FFF1111, 0x0FFF1111));

    // To get the multiplication to work, we need to caste the data type in the functions
    printf("Multiplication: %I64lli\n", maths_mul(0x0FFF1111, 0x0FFF1111)); // I64lli is the placeholder for a long long int

    printf("Division: %0.2f\n", maths_div(100,8)); // The 0.2 sets the nuber of decimal places

    return 0;
}

