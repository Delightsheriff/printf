#include "main.h"

/**
 * print_specifier - Prints a valid specifier
 * @specifier: The specifier to print
 * @args: A list of variadic arguments
 *
 * Return: The length of the specifier, or -1 if an error occurred
 */
int print_specifier(char specifier, va_list args)
{
	int i = 0;
	int len = 0;

	printer_t variations[] = {
		{"i", print_integer},
		{"b", print_binary},
		{"d", print_integer},
		{"s", print_string},
		{"c", print_char},
		{NULL, NULL}
	};

	while (variations[i].tester)
	{
		if (*variations[i].tester == specifier)
		{
			len = variations[i].pr(args);
		}
		i++;

	}
	return (len);
}


/**
 * print_invalid_specifier - Prints an invalid specifier
 * @prev_specifier: The previous specifier
 * @specifier: The invalid specifier
 * @count: The current count of characters printed
 *
 * Return: The updated count of characters printed
 */
int print_invalid_specifier(char prev_specifier, char specifier, int count)
{
	count += print('%');

	if (prev_specifier == ' ')
	{
		count += print(' ');
		count += print(specifier);
	}
	else
	{
		count += print(specifier);
	}

	return (count);
}
