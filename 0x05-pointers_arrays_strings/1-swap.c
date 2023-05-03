#include "main.h"

/**
  * swap_int - unction that swaps the values of two integers
  * @a: input 1
  * @b: input 2
  * Return: ...
  */

void swap_int(int *a, int *b)
{
	int swip;

	swip = *a;
	*a = *b;
	*b = swip;
}
