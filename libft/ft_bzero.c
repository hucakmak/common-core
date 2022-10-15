#include "stdio.h"

void ft_bzero(void *s, size_t n)
{
	size_t i;
	char *a;

	a = s;
	i = 0;
	if (n != 0)
	{
		while (i < n)
		{
			a[i++] = 0;
		}
	}
}