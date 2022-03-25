/*
 * int overflow
 * floating-point overflow
 * floating-point underflow
 */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{ 
	
	printf("The maximum value of the int is %d\n", INT_MAX);
	printf("The maximum value of the float is %e\n", FLT_MAX);
	printf("The minimum value of the float is %e\n",FLT_MIN);
	printf("integer overflow: the maximum value of integer plus one equals to %d\n", INT_MAX + 1);
	printf("floating-point overflow: the maximum value of floating-point number plus 10 equals to %f\n",  FLT_MAX * 10);
	printf("floating-point underflow: the minimum value of floating-point number divided by two equals to %f\n", FLT_MIN / 2);

	return 0;
}

