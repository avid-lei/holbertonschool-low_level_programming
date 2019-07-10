#include "holberton.h"

/**
 *_sqrt_recursion - returns natural square root
 *@n: int
 *@x: int
 * Return: int
 */
int sqcomp(int n, int x);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqcomp(n, 0));

}

/**
  * sqcomp - compare squares with numbers
  *@n:int
  *@x:int
  *Return: int
  */

int sqcomp(int n, int x)
{
if (n == (x * x))
	return (x);
else if (n > (x * x))
return (sqcomp(n, x + 1));

else
	return (-1);
}
