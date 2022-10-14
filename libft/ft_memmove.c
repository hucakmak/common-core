#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)

{
    char *a;
    a = dst;
    const char *b;
    b = src;
    size_t i = 0;

    if (src < dst)

        {
            while (len > 0)
            {
                a[len - 1] = b[len - 1];
                len--;
            }
            return (dst);
        }

    else
        {
            while (i < len)
            {
                a[i] = b[i];
                i++;
            }
            return (dst);
    }
}