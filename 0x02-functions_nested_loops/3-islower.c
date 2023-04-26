#include "main.h"
/**
* _islower - print alphabet in lowercase
*
*@c: character
*
* Return: Always 0 (success)
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_putchar('1');
		return (0);
	}
	_putchar ('\n');
return (0);
}
