#include "libft.h"

void *ft_memchr(const void *str, int ch, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (*((unsigned char *)str + i) == (unsigned char)ch)
            return ((void *)str + i);
        i++;
    }
    return (NULL);
}

int main()
{
    char s1[] = "abcdeg";
    char c = 'd';
    char *ret;
    ret = ft_memchr(s1, c, 6);
    
    if (!ret)
        printf("NULL\n");
    else
        printf("String after |%c| is - |%s|\n", c, ret);
    return 0;
}