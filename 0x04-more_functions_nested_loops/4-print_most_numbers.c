#include "main.h"
/**
  * print_most_numbers - prints the numbers i
  *
  * Return: void
  */

void print_most_numbers(void)
{

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
		_putchar('\n');
}
