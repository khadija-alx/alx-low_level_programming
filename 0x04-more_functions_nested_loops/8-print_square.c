#include "main.h"

/**
  * print_square - function that prints a square
  * @size: size
  * Return: square
  */

void print_square(int size)

{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}