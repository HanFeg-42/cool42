#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;

    if (dest < src || dest >= src + n)
    {
        i = 0;
        while (i < n)
        {
            *((unsigned char *)dest + i) = *((unsigned char *)src + i);
            i++;
        }
        return ((void *)dest);
    }
    else {
        i = n;
        while (i > 0)
        {
            i--;
            *((unsigned char *)dest + i) = *((unsigned char *)src + i);
        }
        return ((void *)dest);
    }
    
}

#include <stdio.h> 
#include <string.h> 

int main() 
{ 
    char dest_str[] = "Tutorialspoint"; 


    puts("source string [src_str] before memmove:-"); 
    puts(dest_str); 

    /* Copies contents from source to destination */
    ft_memmove(dest_str + 2, dest_str, 8); 

    puts("\nsource string [src_str] after memmove:-"); 
    puts(dest_str); 
    return 0; 
}