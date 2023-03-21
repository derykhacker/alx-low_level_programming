#include "main.h"
#include <unistd.h>
/*
 * _putchar - writes the character c to stdout
 *
 * Reeeturn: On success 1.
 * On error, -1 is returned, and errno is set appeopriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
