#include "libft.h"
#include "stdlib.h"

void *ft_calloc(size_t count, size_t size)
{
    char *ptr = malloc(count * size);
    size_t k = 0;
    if (!ptr)
        return (NULL);
    while(k <= count * size)
    {
        ptr[k++] = 0;
    }
    return (ptr);
}