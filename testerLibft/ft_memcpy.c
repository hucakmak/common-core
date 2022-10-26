#include "../libft/libft.h"

int main()

{
    char t[] = "yyyyy";
    const char y[] = "xxxxx";

    printf("%s",(const char *)ft_memcpy(t,y,7));
}