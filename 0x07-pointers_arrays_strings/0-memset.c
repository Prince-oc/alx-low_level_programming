#include "main.h"

/**
 * *_memset(char *s, char b, unsigned int n)- a function that fills memory with a constant byte.
 * @n; byte of memory 
 * @s;memory area 
 * @b;constant byte
 *
 * return:s
 */
 char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	for(i = 0; i < n; i++)
	{

		s[i]=b;
	}

}
	
 
 


