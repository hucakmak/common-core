#include "stdio.h"

void ft_bzero(void *s, size_t n)

{
	char *a;
	a = s;
	size_t i = 0;
	size_t len = 0;
	while (a[len] != 0)
	{
		len++;
	}
	while (i < len && i < n)
	{
		a[i++] = 0;
	}
}