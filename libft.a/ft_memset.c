#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        *((unsigned char *)str + i) = (unsigned char)c;
        i++;
    }
    return ((void *)str);
}

#include <stdio.h>
#include <string.h>

int main() {
    char s1[35] = "ana b3da mgabla lbher la yrhel";
    char s2[35] = "ana b3da mgabla lbher la yrhel";
    char c = 'a';
    printf("Before :\t %s\n",s1);
    memset(s1, c, 50);
    printf("memset :\t %s\n",s1);
    ft_memset(s2, c, 50);
    printf("ft_memset :\t %s\n",s2);
}