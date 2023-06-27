#include < unistd.h>
#include "main.h"

/**
 * _putchar - outputs the character c to stdout
 *
 * @c: is the character to be outputted
 *
 * Return: will return 1 if successful.
 *
 * -1 will be returned on error
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
