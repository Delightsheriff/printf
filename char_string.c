#include "main.h"

/**
 * print_char - prints a single character
 * @args: list of variadic arguments
 *
 * Return: length of character
 */
int print_char(va_list args)
{
	int c = va_arg(args, int);

	_write(c);
	return (1);
}

/**
 * print_string - Prints a string
 * @args: A list of variadic arguments
 *
 * Return: The length of the string
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;

	if (str == NULL)
	{
		print("(null)");
		return (6);
	}
	while (str[len])
	{
		print(str[len]);
		len++;
	}
	return (len);
}
