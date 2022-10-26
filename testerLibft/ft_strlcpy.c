#include "../libft/libft.h"

int main()
{
    char dst[] = "aaaaa";
    char src[] = "123456789";
    printf("%s",(char *)ft_strlcpy(dst,src,8));
}