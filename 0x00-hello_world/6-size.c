#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	double d;
	float f;
	char c;
	/*sizeof evaluates  size of a variable*/
	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of a double is: %lu.\n", (unsigned long)sizeof(d));
		printf("The aize of a float is: %lu.\n", (unsigned long)sizeof(f));
	printf("The size of a char is: %lu.\n", (unsigned long)sizeof(c));
	return (0);
}
