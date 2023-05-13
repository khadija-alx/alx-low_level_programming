#include "main.h"

/**
  * _strlen - Write a function that returns the length of a string
  * @s: input
  * Return: length of a string
  */

int _strlen(char *s)
{
	int string;

		for (string = 0; *s != '\0'; s++)
			++string;

	return (string);
}
