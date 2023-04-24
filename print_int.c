#include "main.h"

/**
  * print_integer - Prints a integer
  * @args: A list of variadic arguments
  *
  * Return: The length of the string
  */
int print_integer(va_list args)
{
	int count = 1, i = 0;
	unsigned int j = 0;

	j = va_arg(args, int);
	i = j;
	if (m < 0)
	{
		_write('-');
		i = i * -1;
		j = i;
		count += 1;
	}
	while (j > 9)
	{
		j = j / 10;
		count++;
	}

	print_integer_recursive(i);
	return (count);
}


/**
  * print_integer_recursive - Prints a integer
  * @a: integer to print
  *
  * Return: Nothing
  */
void print_integer_recursive(int a)
{
	unsigned int temp;

	temp = a;
	if (temp / 10)
		print_integer_recursive(temp / 10);
	_write(temp % 10 + '0');
}
