#include <stdio.h>
/**
  *main - prints all single digit numbers of base 10 starting from 0
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	int digit = 0;
		while (digit <= 9)
		{
			printf("%d", digit);
			digit++;
		}
	printf("\n");

	return (0);
}
