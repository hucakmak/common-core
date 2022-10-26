#include "libft.h"
#include "stdlib.h"

char *ft_strdup(const char *s1)
{
    size_t i = 0;
    size_t len;
    len = ft_strlen(s1);
    len += 1;
    char *ptr = malloc(len);
    if(!s1)
        return (0);
    while (i < len)
    {
        ptr[i] = s1[i];
        i++;
    }
    ptr[i] = 0;
    return (ptr);
}