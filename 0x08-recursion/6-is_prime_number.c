#include "holberton.h"

/**
 *is_prime_number - checks for prime number
 *@n:int
 *@x:int
 * Return: 1 if prime, 0 if not
 */
int primecheck(int n, int x);
int is_prime_number(int n)
{
if (n > 1)
	return (primecheck(n, n - 1));
else
	return (0);

}
/**
 *primecheck - prime checker
 *@n:int
 *@x:int
 *Return: 1 if prime, 0 is not
 */

int primecheck(int n, int x)
{
if (x > 1 && n % x == 0)
	return (0);
else if (x > 1)
	return (primecheck(n, x - 1));
else
	return (1);
}
