/* 
 * write a program that asks you to enter an ASCII code value, and then prints the character having that ASCII code
 */

#include <stdio.h>

int main(void)
{
	char character;

	printf("This program will convert an ASCII code to a character.\n");
	printf("Please enter an integer between 0 and 127: ");
	scanf("%d", &character);
	printf("The correspondent character for %d is %c\n", character, character);
	return 0;
}
