#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (*((unsigned char *)str1 + i) > *((unsigned char *)str2 + i))
            return (1);
        else if (*((unsigned char *)str1 + i) < *((unsigned char *)str2 + i))
            return (-1);
        i++;
    }
    return (0);
}

int main()
{
    char s1[] = "abcdef";
    char s2[] = "abcdeg";
    int result = ft_memcmp(s1, s2, 6);
    
    if (result == 0)
        printf("s1 and s2 are identical in the first 6 bytes.\n");
    else if (result > 0)
        printf("s1 is greater than s2 in the first 6 bytes.\n");
    else
        printf("s1 is less than s2 in the first 6 bytes.\n");

    return 0;
}
