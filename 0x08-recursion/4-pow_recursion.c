#include "holberton.h"

/**
 *_pow_recursion - function that returns the power of number
 *@x: number
 *@y: power
 *Return: the number raised to the power
 */
int _pow_recursion(int x, int y) {
  // Base case: if y is 0, return 1
  if (y == 0) {
    return 1;
  }
  // Recursive case: otherwise, return x multiplied by the result of calling this function with x and y-1
  return x * _pow_recursion(x, y - 1);
}

