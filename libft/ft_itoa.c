#include "libft.h"

char basamak(int n)
{
    int a;
    a = 0;
    if(n < 0 || n == 0)
        a++;
    while(n != 0)
    {
        n = n / 10;
        a++;
    }
    return (a);
}

char *ft_itoa(int n)
{
    char *nbr;
    int i;
    int a;

    i = 0;
    a = basamak(n);
    nbr = malloc(sizeof(char) * (a + 1));
    if(!nbr)
        return(0);
    while(i < a)
    {
        if (n == -2147483648)
        {
            
        }
        else if (n < 0)
        {
          
        }
        else
        {
        
        }
    }   
}
