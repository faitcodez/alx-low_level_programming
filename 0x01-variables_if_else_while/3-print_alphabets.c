#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Print alphabets in lowerCase and upperCase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lowerCase = 'a';
	int upperCase = 'A';
	/*your code here*/
	while (lowerCase <= 'z')
	{
	putchar(lowerCase);
	lowerCase +=;
	}
	while (upperCase <= 'Z')
	{
	putchar(upperCase);
	upperCase += 1;
	}
	putchar('\n');
	return (0);
}
