#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int x;
long int sum = 0;
long int totalsum = 0;
long int num1 = 1;
long int num2 = 2;

for (x = 0; x < 41; x++)
{

	sum = num1 + num2;

	if ((num2 % 2 == 0) && (num2 < 4000000))
	{
		totalsum = totalsum + num2;
	}
	num1 = num2;
	num2 = sum;

}
	printf("%ld\n", totalsum);
return (0);
}
