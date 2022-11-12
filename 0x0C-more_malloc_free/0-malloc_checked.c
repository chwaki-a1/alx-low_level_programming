#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate a space
 * @b: unsigned int
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */

void *malloc_checked(unsigned int b)
{
char *x;

x = malloc(b);

if (x == NULL)
{
	exit(98);
}

return (x);

}
