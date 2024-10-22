#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;

    i = 0;
    while (i < n - 1)
    {
        *((unsigned char *)dest + i) = *((unsigned char *)src + i);
        i++;
    }
    *((unsigned char *)dest + i) = 0;

    return ((void *)dest);
}

#include <stdio.h>
#include <string.h>

int main ()
{
   const char src[20] = "Hello world!";
   char dest[20];
   char dest1[20];
   
   strcpy(dest,"Heloooo!!");
   strcpy(dest1,"Heloooo!!");
   
   printf("Before ft_memcpy dest = %s\n", dest);
   
   ft_memcpy(dest, src, strlen(src) + 1);
   memcpy(dest1, src, strlen(src) + 1);
   
   printf("After ft_memcpy dest = %s\n", dest);
   printf("After memcpy dest1 = %s\n", dest1);
   return(0);
}