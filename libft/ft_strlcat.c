#include "libft.h"
#include "string.h"


size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t  dlen = strlen(dst);
	size_t slen = strlen(src);

	if(dstsize < dlen)
		return (dstsize + dlen);

	i = 0;
	while (i < dstsize && src[i] != 0 && dst[i + dlen] != 0)
	{
		dst[i + dlen] = src[i];
		i++;
	}
	return (slen + dlen);
}

/*
int main()
{
	int sonuc;

	char dst[100] ="AAAAAAAAAAAAAAABBBBBBBBBBBBBBB";
	char src[16] ="BBBBBBBBBBBBBBB";
	printf("%s\n",dst);
	printf("%s\n",src);


	sonuc = strlcat(dst,src, 1);
	printf("%s\n",dst);
	printf("Sonuc = %d\n",sonuc);

}
gönderilen boyun dstlen kadarsa yani hiçbirşey yazamayacaksa slen ve dlen döner

gönderilen boyut dst lenden küçükse geriye dstlen + boyut döner

[100] "asdasd0"

dst , src , size

NULL
""
"dasdas"

-1
0
sayı < dst
sayı > dst

sayı  >  slen + dlen

"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dlen;
	size_t slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	size_t i = 0;

	if(dstsize <= dlen)
 		{
			if()
 		}

	return (dlen + slen);
}


*/





	/*
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

int main()
{
	char dst[] = "aaaaaaa";
	const char src[] = "123456789";
	printf("%zu",ft_strlcat(dst,src,0));
}
*/