/* Program will count the number of times the function is called */

#include <stdio.h>

/* Function prototype */
void myFun1(void);

/* 
2. Placing the variable here means it can be seen by any function in 
the program, meaning it can be modified by another file. We want
a global function that is provate to a function. Thid can be done
using "static" -- go back to the fucntion to see this 
*/
int count = 0;

int main()
{
    myFun1();
    myFun1();
    myFun1();
    myFun1();

    return 0;
}

void myFun1(void)
{
    /* 1. Variable needs removed from local space to global space 
    because running from here neabs program does not operate
    as expected */
     //int count = 0;

    /* 3. This is now a global variable (dies when program ends) which
    is private to the function. This allows the program to operate
    as expected */
     static int count = 0; 

     count = count + 1;

     printf("This function has execusted %d time(s)\n", count);

}