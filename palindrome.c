#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
	char c;
	struct list *next;
} list_t;


int check(list_t *a)
{

	int count;
	list_t *h = a;

	char *s;
	char *beg;
	char *end;
	int x;
	int y = 0;

	for (count = 0; h; count++)
		h = h->next;

	s = malloc(sizeof(char)* count + 1);

	for (x = 0; x < count; x++)
	{
		s[x] = a->c;
		a = a->next;
	}

	s[x] = '\0';
	end = s;
	beg = s;

	while (*end)
		end++;

	end--;

	while (y < (count/2))
	{

		if (*beg != *end)
		{
			return (0);
		}

		beg++;
		end--;
		y++;
	}
	return (1);


}

int main(void)
{

	list_t *a = malloc(sizeof(list_t));
	list_t *b = malloc(sizeof(list_t));
	list_t *c = malloc(sizeof(list_t));
	list_t *d = malloc(sizeof(list_t));


	int flag;

	a->c = 'a';
	a->next = b;
	b->c = 'b';
	b->next = c;
	c->c = 'b';
	c->next = d;
	d->c = 'c';
	d->next = NULL;

	flag = check(a);

	if (flag)
		printf("Yes\n");
	else
		printf("No\n");


}


