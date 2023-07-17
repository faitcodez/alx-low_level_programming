#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Print Alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lowerCase = 'a';
	/*your code here*/
	while (lowerCase <= 'z')
	{
	putchar(lowerCase);
	lowerCase += 1;
	}
	putchar('\n');
	return (0);
}
