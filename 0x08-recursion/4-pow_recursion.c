#include "holberton.h"

/**
 * _pow_recursion - x ^ y
 *@x:int
 *@y:int
 * Return:int
 */

int _pow_recursion(int x, int y)
{

if (y > 0)
{
x = x * (_pow_recursion(x, y - 1));
return (x);

}
else if (y == 0)
	return (1);
else
	return (-1);
}
