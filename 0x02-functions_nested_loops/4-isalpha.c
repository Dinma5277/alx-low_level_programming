#include "main.h"
/**
 * _isalpha - Checks for alphabetic order
 *
 * @c: alphabet to checks for
 *
 * Return: 1 if c is a letter, 0 otherwisw
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
