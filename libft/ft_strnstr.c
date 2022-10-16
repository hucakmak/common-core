#include "libft.h"
#include "string.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)

{
	size_t i;
	i = 0;
	size_t j;

	if(!needle || len == 0)
	{
		return (0);
	}
	while(haystack[i] != 0)
	{
		printf("1.while girildi.\n");
		j = 0;
		while (haystack[i] == needle[j] && needle[i] != 0)
		{
			printf("2.while girildi\n");
			i++;
			j++;
			if(needle[j] == 0)
			{
				printf("if girildi\n");
				return (char *)(haystack + i);
			}

			printf("J nin 2. while içi değeri: %zu\n",j);
			printf("i nin 2. while içi değeri: %zu\n",i);

		}
		i++;
	}
	printf("i nin değeri: %zu\n",i);
	printf("j nin değeri: %zu\n",j);
	return (0);
}

int main()
{
	char bir[30] = "aaabcabcd";
	char iki[10] = "aabc";
	printf("Benim sonucum: %p\n",ft_strnstr(bir,iki,-1));
	printf("sistem sonucu: %p\n",strnstr(bir,iki,-1));
}