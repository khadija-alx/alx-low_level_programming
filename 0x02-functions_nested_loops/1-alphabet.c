#include "main.h"
/**
* main prints the alphabet in lowercase, followed by a new line print_alphabet
*
* Return: Always 0 (success)
*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
