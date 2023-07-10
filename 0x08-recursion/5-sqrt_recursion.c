#include "main.h"
/**
 * _sqrt_recursion - function that returns the power of number
 *@n: original number
 *@R: square root
 *
 *Return: square root
 */
int _sqrt_recursion(int n, int R);
{
	if (R * R == n)
	{
		return (R);
	}
	else if (R * R > n)
	{
		return (-1);

	}
	return (comparar(n, R + 1));
}
/**
*_sqrt_recursion - function that returns the power of number
*@n: number
*Return: the natural square root
*/
int _sqrt_recursion(int n)
{
	return (comparar(n, 1));
}

