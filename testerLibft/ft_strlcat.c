#include "../libft/libft.h"

int main()
{
    char dst[] = "deneme";
    char src[] = "huseyin";
    printf("%s", (const char *)ft_strlcat(dst,src,3));
}