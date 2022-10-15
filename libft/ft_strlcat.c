#include "stdio.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)

{

	size_t i = 0;

	if(dstsize > 0 && !dstsize)
	{
		while(i < dstsize - 1 )
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	size_t t = 0;
	size_t y = 0;
	while(src[t] != 0)
		t++;
	while(dst[y] != 0)
		y++;
	t += y;
	if( dstsize == 0 && dstsize < y)
		t -= 1;
	return (t);
}

/*
int main()
{
	char dst[] = "aaaaaaa";
	const char src[] = "123456789";
	printf("%zu",ft_strlcat(dst,src,0));
}
*/