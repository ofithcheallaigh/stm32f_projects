#include<stdio.h>

int main(void)
{
    /* 
    The 0x87 is 1 byte of data, but the complier views it as 4 bytes of data.
    The 0xFF00 is 2 bytes of data to a human, but the complier again sees it as 4 bytes
    If we don't define a type, these constants are defined as int, which is the default
    */
    //unsigned char data = 0x01 + 0xFF00; 
    /*
    The complier sees the above as 0x00000087 and 0x0000FF00.
    If we change 0xFF00 to say, 89, and 0x87 to 0x01, we will not get the error we get with the long number
    which is: type_casting.c:10:26: warning: unsigned conversion from ‘int’ to ‘unsigned char’ changes value from ‘65415’ to ‘135’ [-Woverflow]
    This error is telling us int (the default type) won't fit into unsigned char.
    */
   // unsigned char data = 0x01 + 0x89;

   /* We can get around these warning by using explicit casting */

    unsigned char data = (unsigned char)(0x01 + 0xFF00);

    /* If we look at the initial equation result 80 / 3 = 26.0000 we see the fractional part is lost 
    We need to tell the complier to consider one or other number as a float*/
    // float result = 80 / 3;
    float result = (float)80 / 3;

    printf("Data: %u, result: %f\n", data, result);
}