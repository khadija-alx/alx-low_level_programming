#include <stdio.h>
/**
  *main - prints all single digit numbers of base 10 starting from 0
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	int ch = 48;
		while (ch <= 57)
		{
			putchar(ch);
			ch++;
		}
	putchar('\n');

	return (0);
}
