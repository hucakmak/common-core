#include "stdio.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)

{
    char *a;
    a = dst;
    const char *b;
    b = src;

    size_t i = 0;
    while(i < n)
    {
        a[i] = b[i];
        i++;
    }
    return (dst);
}