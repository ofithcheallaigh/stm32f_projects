#include <stdio.h>

void function_add_numbers(int a, int b, int c);
int return_function_add_numbers(int a, int b, int c); 


int main()
{
    /* These are used in the void functiom
    function_add_numbers(12, 13, 14);
    function_add_numbers(-20, 20, 40);

    int valueA = 70, valueB = 90;
    function_add_numbers(valueA, valueB, 100);
    */

    int retValue;
    retValue = return_function_add_numbers(12,13,0);
    printf("The returned value is: %d\n", retValue);


    return 0; // This is because the main type is int

}


void function_add_numbers(int a, int b, int c) // This is a fucntion definition. Void means the function does not return anhthing
{
    int sum;
    sum = a + b + c;

    printf("Sum is: %d\n", sum);
}

int return_function_add_numbers(int a, int b, int c) // No longer a void function, this will return something to the caller (i.e. the main)
{
    int sum;
    sum = a + b + c;

    return sum; // We are returning an int, so function type has to match this
}