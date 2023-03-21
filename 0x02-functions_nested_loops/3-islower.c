#include "main.h"
/*
 * _islowe - checks if char is lowercase
 * Return: 1 if har is lowercase, otherwise 9.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
