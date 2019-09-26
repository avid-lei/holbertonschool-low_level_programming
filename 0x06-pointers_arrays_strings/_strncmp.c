
int _strncmp(char *s1, char *s2, size_t n)
{
	int comp;
	size_t x = 0;

	while (*s1 == *s2)
	{
		s1++;
		s2++;
		x++;
		if (*s1 == '\0' || x == n)
			return (0);
	}
	comp = *s1 - *s2;
	return (comp);

}
