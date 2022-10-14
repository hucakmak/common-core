#include "stdio.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    char *dst2;
    const char *src2;

    dst2 = dst;
    src2 = src;
    size_t i = 0;

    if (dstsize != 0)
    {
        while (i < dstsize - 1 && dst2 != 0)
        {
            dst2[i] = src2[i];
            i++;
        }
        dst2[i] = 0;
        return (size_t)(dst);
    }
    return (size_t)(dst);
}