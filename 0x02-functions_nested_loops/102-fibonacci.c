#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int x;
int sum;
int num1 =1;
int num2 =2;

printf("%d, ", num1);
printf("%d, ", num2);
for (x = 0; x <= 48; x++)
{
	sum = num1 + num2;
	num1 = num2; 
	num2 = sum;
	printf("%d, ", sum);
}

return (0);
}
