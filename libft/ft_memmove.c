#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)

{
    char *a;
    a = dst;
    const char *b;
    b = src;
    size_t i = 0;

    if (src > dst)

        {
            while (len > -1)
            {
                a[len] = b[len];
                len--;
            }
            return (dst);
        }
    else {
        while (i < len)
        {
            a[i] = b[i];
            i++;
        }
        return (dst);
    }
}