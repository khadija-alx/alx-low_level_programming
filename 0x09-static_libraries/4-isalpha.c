#include "main.h"
/**
* _isalpha - Write a function that checks for alphabetic character
*
* @c: the alphabetic
*
* Return: Always 0 (success)
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
