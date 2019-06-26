#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int x;
double sum = 0;
double num1 = 1;
double num2 = 2;

printf("%.f", num1);
printf(", %.f", num2);
for (x = 0; x < 95; x++)
{
	sum = num1 + num2;
	num1 = num2;
	num2 = sum;
	printf(", %.f", sum);
}
	printf("\n");
return (0);
}
