#include "libft.h"

int ft_tolower(int ch)
{
    unsigned char   c;
    
    c = (unsigned char)ch;
    if (c >= 65 && c <= 90)
        return (c + 32);
    return (c);
}