#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - print the lowerCase letters except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lowerCase = 'a';
	/*your code here*/
	while (lowerCase <= 'z')
	{
	if (lowerCase == 'e' || lowerCase == 'q')
	{
		lowerCase += 1;
	}
	else
	{
		putchar(lowerCase);
		lowerCase += 1;
	}
	}
	putchar('\n');
	return (0);
}
