#include <unistd.h>

/**
 * _putchar - writes the char to c stdout
 * @c: the character to print
 *
 * Return: write system call. -1 if something went wrong.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
