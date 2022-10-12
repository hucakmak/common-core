#include "stdio.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i,j;
    i = 0;
    j = 0;
    while(dst[i] != 0)
    {
        i++;
    }

    while(src[j] != 0 && j < dstsize)
    {
        dst[i++] = src[j++];
    }
    dst[i] = 0;
    return (size_t)(dst);
}