#include "main.h"
*
/**_print_rev_recursion-  prints a string in reverse with recursion
 * @s;string
 *
 * Return; nothing to return
 *
 */
void _print_rev_recursion(char *s);
{
	if(*s!='\0')
	{
		 _putchar (s(0))
			  _print_rev_recursion(s + 1)
	}
	else
	{
		_putchar('\n')
	}
}
