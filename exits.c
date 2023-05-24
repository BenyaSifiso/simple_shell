#include "shell.h"

/**
 **_strncpy - clones a string.
 *@dest: destination string to be cloned to
 *@src: source of string
 *@n: characters to be copied
 *Return: concatenated strings
 */
char *_strncpy(char *dest, char *src, int n)
{
int i, j;
char *s = dest;
i = 0;
while (src[i] != '\0' && i < n - 1)
{
dest[i] = src[i];
i++;
}
if (i < n)
{
j = i;
while (j < n)
{
dest[j] = '\0';
j++;
}
}
return (s);
}

/**
 **_strncat - this Concatenates two strings.
 *@dest: First string.
 *@src: second string.
 *@n: bytes to be used ON A MAX
 *Return: Concatenated stringS
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
char *s = dest;
i = 0;
j = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
if (j < n)
dest[i] = '\0';
return (s);
}

/**
 **_strchr - locate chara in stringS
 *@s: string to be parsed.
 *@c: character to SEARCH
 *Return: (s) points to memory area s
 */
char *_strchr(char *s, char c)
{
do
if (*s == c)
return (s);
while (*s++ != '\0');
return (NULL);
}
