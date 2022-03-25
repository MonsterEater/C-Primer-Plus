// quart and molecule converter

#include <stdio.h>

int main(void)
{
	float quarts;
	
	printf("Enter the amount of water in quarts: ");
	// there might be round errors and overflow if the amount of quarts too large
	scanf("%f", &quarts);
	printf("%f quarts equals to %f molecules.\n", quarts, quarts * 950 /3.0e-23); 
	// possible floating-point number overflow
	
	return 0;
}
