
// Include guards  avoids multiple inclusion of the contents
#ifndef MATH_H_
#define MATH_H_

// Function prototypes
// Also known as exposed function prototypes
int maths_add(int n1, int n2);
int maths_sub(int n1, int n2); 
long long int maths_mul(int n1, int n2); // long long int used incase result went beyond range of int 
float maths_div(int n1, int n2); // float is used because diving two ints can result in a float

#endif /* MATH_H_ */