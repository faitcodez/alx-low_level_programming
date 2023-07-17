#include <stdlib.h>
#include <stdio.h>
/*more header here*/
/**
 * main - Print numbers of base 16 in lowerCase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char letter;
	/*your code here*/
	for (num = 0; num < 10; num++)
	putchar((num % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
	putchar(letter);
	putchar('\n');
	return (0);
}
