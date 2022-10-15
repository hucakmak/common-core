#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;
	char new_c;

	new_c = c;
	if (s == NULL)
		return (NULL);

	i = 0;
	while (s[i] == new_c || s[i] != 0)
	{
		if (s[i] == new_c)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	return (NULL);
}