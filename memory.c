#include "shell.h"

/**
 * bfree - liberates pointer and NULLs the addres.
 * @ptr: addres of pointer to liberate
 *
 * Return: 1 if freed, otherwise 0.
 */
int bfree(void **ptr)
{
if (ptr && *ptr)
{
free(*ptr);
*ptr = NULL;
return (1);
}
return (0);
}
