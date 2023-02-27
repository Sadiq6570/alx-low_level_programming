#include "main.h"
#include <unistd.h>

/**
 * _puchar - writes the character c to stdout
 * @c: the charcater to print
 *
 * Return: on success 1.
 * on errro, -1 is returned, and error sis set appropriately
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}

