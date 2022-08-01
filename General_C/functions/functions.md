# Functions

In C, executable statements can be written inside a function.
A C function is nothing more than a collection of statements which preform a specific task.
Every C program will have at least 1 function - the `main` function. 
Using functions bring modularity to your code, also makes it easy to debug, modify, and increase the maintainability of the code.
Using C functions also minimises code size and reduces redundancy.
Functions provide abstraction. For example, `printf` is a function given by a standard library code. 

When we look at the main function, there are two ways to create this:
```
int main() // main function definition with no input arguments
{
    /* ... */
}
```
Or
```
int main(int argc, char* argv[]) // main function def with 2 input args (command line arguments)
{
    /* ... */
}
```

We do not use this second option in embedded systems as there no command line arguments in embedded systems.
By making the type of the main function an `int` because `main` should return `int` type data as per 'C' standard C89 and above.

The `main` function is a special function in C from where execution of a program starts. The main function returns the status 
of a program to the parent process, showing success or failure of the program. 0 means SUCCESS, non-zero means ERROR. 

In C, functions need to be declared before they are used. Prototype lets the compiler know about the return data type, argument list,
and their data type and order of arguments being passed to the function.