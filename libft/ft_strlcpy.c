#include "stdio.h"
#include "string.h"

// size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
int main()
{
    char a[] = "aaaaa";
    const char b[] = "bbbb";
    printf("a önceki hali %s\n\n",a);
    printf("b önceki hali %s\n\n",b);
    printf("%zu\n\n",strlcpy(a,b,3));
    printf("a sonraki hali %s\n\n",a);
    printf("b sonraki hali %s",b);
}