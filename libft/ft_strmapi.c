#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *new;
    unsigned int n;

    n = 0;
    i = ft_strlen(s);
    new = (char *)malloc(i + 1);
    if(!new)
        return (0);
    while(n < i)
    {
        new[n] = f(n,s[n]);
        n++;
    }
    new[n] = 0;
    return(new);
}