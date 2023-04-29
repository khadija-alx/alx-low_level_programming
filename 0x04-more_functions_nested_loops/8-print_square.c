#include "main.h"

/**
  * print_square - function that prints a square
  * @size: size
  * Return: always 0 (success)
  */

void print_square(int size)

{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
