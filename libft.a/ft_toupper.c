#include "libft.h"

int ft_toupper(int ch)
{
    unsigned char   c;
    
    c = (unsigned char)ch;
    if (c >= 97 && c <= 122)
        return (c - 32);
    return (c);
}