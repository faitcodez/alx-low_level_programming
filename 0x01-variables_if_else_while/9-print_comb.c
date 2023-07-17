#include <stdlib.h>
#include <stdio.h>
/*more header here*/
/**
 * main - Print all possible combimation of single digit.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	/*your code here*/
	for (num = 0; num <= 9; num++)
	{
	putchar((num % 10) + '0');
	if (num == 9)
	continue;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
