#include "../libft/libft.h"

int main()

{
    char src[] = "cccc";
    char dst[] = "aaaaaaa";
    printf("%s",(const char *)ft_memmove(dst,src,4));
}