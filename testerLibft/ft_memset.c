#include "../libft/libft.h"

int main()
{
    unsigned char test[] = "aaapsu";
    printf("%s", (unsigned char *)ft_memset(test,'h',1));
}