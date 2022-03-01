#include "main.h"
#include <stdlib.h>

/**
 * _strstr -  a function that locates a substring.
 * @haystack: an input string to search in
 * @needle: an input string to locate into string haystack
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *ha = haystack;
	char *ne = needle;

	while (*haystack != '\0')
	{
		haystack = ha;
	        ne = needle;
		while (*ne != '\0' && *ha == *ne)
		{
			ha++;
			ne++;
		}

		if (*ne == '\0')
			return (haystack);
		ha = haystack + 1;
	}
	return (NULL);
}
