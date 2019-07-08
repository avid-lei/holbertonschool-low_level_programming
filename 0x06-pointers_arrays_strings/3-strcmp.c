#include "holberton.h"
/**
  *_strcmp- compares stings
  *@s1: char
  *@s2: char
  *Return: int
  */

int _strcmp(char *s1, char *s2)
{
int comp;

if (*s1 == *s2)
	return (0);
else
{	comp = *s1 - *s2;
	return (comp);
}
}
