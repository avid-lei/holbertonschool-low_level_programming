#include "holberton.h"
/**
 *_strncpy- copys n bytes of src to dest
 *@dest: char
 *@src: char;
 *@n:int;
 *Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
char *tempd = dest;
char *temps = src;
int x;
int length;

while (*temps)
{
	length++;
	temps++;
}


for (x = 0; x < length && x < n && *(tempd + x) ; x++)
{
	*(tempd + x) = *(src + x);
}
for (; x < n; x++)
{
	*(tempd + x) = '\0';
}



return (dest);

}
