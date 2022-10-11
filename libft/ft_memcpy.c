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

int main()
{

    char *t = "selam";
    char *y = "aaaaa";

    printf("%s",(const char *)ft_memcpy(t,y,3));
}