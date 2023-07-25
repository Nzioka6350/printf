#include "main.h"
/**
 * get_size - size to cast arguments
 * @format: string to print arguments
 * @i: arguments to print
 * Return: size
 */
int get_size(const char *format, int *i)
{
	int curr_i = *i + 1;
	int size = 0;

	if (format[curr_i] == 'l')
		size = s_long;
	else if (format[curr_i] == 'h')
		size = s_short;
	if (size == 0)
		*i = curr_i - 1;
	else
		*i = curr_i;
	return (size);
}
