// pint, cup, ounce, tablespoon, teaspoon converter

#include <stdio.h>

int main(void)
{
	float cup; //cups could be float

	printf("Enter the volume in cups: ");
	scanf("%f", &cup);
	printf("%f cups equals to %.2f pints.\n", cup, cup / 2);
	printf("%f cups equals to %.2f ounces.\n", cup, cup * 8);
	printf("%f cups equals to %.2f tablespoons.\n", cup, cup * 16);	
	printf("%f cups equals to %.2f teaspoons.\n", cup, cup * 48);	
	
	return 0;
}
