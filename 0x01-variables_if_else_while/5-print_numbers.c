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
	/*your code here*/
	while (num < 10)
	{
		printf("%d", num);
		num += 1;
	}
	printf("\n");
	return (0);
}
