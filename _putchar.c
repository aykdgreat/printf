#include <unistd.h>
/**
 * _putchar - writes to standard output
 * @c: printed char
 * Return: 0 on success and -1 if error occurs
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
