#include "libft.h"
#include "unistd.h"

void ft_putendl_fd(char *s, int fd)
{
    int a;

    a = ft_strlen(s);
    write(fd, s, a);
    write(fd, "\n", 1);
}