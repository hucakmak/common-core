#include "../libft/libft.h"
#include "string.h"

int main()
{
	char arr[10] = "selamiko";
	int len = strlen(arr);
	ft_bzero(arr,0);
	printf("%s\n", arr);

	int i = 0;

	while (i < len)
	{
		printf("%c\n", arr[i]);
		i++;
	}
}