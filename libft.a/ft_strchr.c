#include "libft.h"

char *ft_strchr(const char *str, int search_str)
{
    int i;

    i = 0;
    while (*(str + i))
    {
        if (*(str + i) == (char)search_str)
            return ((char *)str + i);
        i++;
    }
    return (NULL); 
}