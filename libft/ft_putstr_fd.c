#include "unistd.h"
#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int a;
    a = ft_strlen(s);
    write(fd, s, a);
}