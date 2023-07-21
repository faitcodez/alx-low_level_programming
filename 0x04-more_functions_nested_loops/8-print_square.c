#include "main.h"

/**
  *print_square - Draws a square using the # character.
  *@ size: The size of the square to be printed.
  */
void print_square(int size)
{
	int hgt, wid;

	if (size > 0)
	{
	for (hgt = 0; hgt < size; hgt++)
	{ 
	for (wid = 0; wid < size; wid++)
	_putchar(' ');
	_putchar('\\');

	if (hgt == size - 1)
	continue;

	_putchar('\n');
	}
	}

 	_putchar('\n');
}
