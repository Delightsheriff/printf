#include "main.h"

/**
 * is_valid_char - validates if the character is an allowed type
 * @variation: character to be compared
 *
 * This function validates if the input character is one of the allowed types:
 * - c: character
 * - s: string
 * - d: decimal integer
 * - i: integer
 * - b: binary
 * - %: literal % character
 *
 * Return: - 1 if char is equal to an allowed type
 */
int is_valid_char(char variation)
{
	char variations[] = {'c', 's', 'd', 'i', 'b', '%'};
	int i = 0;

	while (variations[i])
	{
		if (variations[i] == variation)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
 * print_formatted - prints a formatted string
 * @format: the string containing the format
 * @args: a list of variadic arguments
 *
 * This function iterates over each character in the `format` string
 * format specifiers starting with the `%` character.
 * format specifier, the function prints the appropriate format
 * `_print_spec` function. If the next character is not valid
 * prints an error message using the `_print_invalid_spec` function
 * character is not a percent sign, the function simply prints the character.
 *
 * Return: the length of the formatted string
 */
int print_formatted(const char *format, va_list args)
{
	int count = 0;
	int i = 0;

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			i++;

			while (format[i] == ' ')
				i++;

			if (format[i] == '%')
				count += print(format[i]);

			if (is_valid_char(format[i]) == 0)
			{
				count = print_invalid_specifier(format[i - 1], format[i], count);
			}
			else
			{
				count += print_specifier(format[i], args);
			}
		}
		else
		{
			count += print(format[i]);
		}
		i++;
	}
	return (count);
}
