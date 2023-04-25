#include <stdio.h>
/**
  *main -prints the alphabet in lowercase and then in uppercase
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (ch <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	return (0);
}
