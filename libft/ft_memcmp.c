#include "libft.h"

{

	size_t i;
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;

	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return ((str1 + i) - (str2 + i));
		}
		i++;
	}
	return (0);
}