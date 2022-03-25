// inch and centimeters converter

#include <stdio.h>

int main(void)
{
	float inch;
	
	printf("Enter your height in inches: ");
	scanf("%f", &inch);
	printf("%f inches equals to %.2f centermeters.\n", inch, inch * 2.54); 

	return 0;
}
