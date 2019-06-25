#include "holberton.h"

/**
* _abs - absolute value of n
* @n : int
* Return: n (Success)
*/

int _abs(int n)
{
	if (n >= 0)
	{	
	return (n);
	}
	else if (n < 0)
	{	
		n = n / (-1);
		return (n);
	}
	
return(n);
}

