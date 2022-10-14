#include "../libft/libft.h"


int main()

{
    char src[] = "123456789";
    char dst[] = "abcdefg";
    printf("%s",(char *)ft_memmove(dst,src,2));
}