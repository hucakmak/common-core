#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;
    unsigned int a;

    i = ft_strlen(s);
    a = 0;
    while(a < i)
    {
        f(a,&s[a]);
        a++;
    }
}