#include <stdlib.h>
#include <stdio.h>
/*more header here*/
/**
 * main - Print all single digit in base 10 from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	/*your codes here*/
	for (num = 0; num < 10; num++)
	putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}
