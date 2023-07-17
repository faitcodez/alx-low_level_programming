#include <stdlib.h>
#include <stdio.h>
/*more header here*/
/**
 * main - Print all lowerCase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	/*your code goes here*/
	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);
	putchar('\n');
	return (0);
}
