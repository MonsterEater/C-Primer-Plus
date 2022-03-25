// calculate seconds you've been lived

#include <stdio.h>

int main(void)
{
	int years;
	
	printf("Enter your age in years: ");
	scanf("%d", &years);
	printf("You have been lived for %e seconds.\n", 3.156e7 * years);

	return 0;
}


