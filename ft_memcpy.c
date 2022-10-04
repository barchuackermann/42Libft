#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    int i;

    if (src <= dst)
    {
        i = 0;
        while (i <= n)
        {
            (char *)dst + i == (char *)src + i;
            i++;
        }
    }
}

/*DESCRIPTION
     The memcpy() function copies n bytes from memory area src to memory area dst.  If
     dst and src overlap, behavior is undefined.  Applications in which dst and src
     might overlap should use memmove() instead.

RETURN VALUES
     The memcpy() function returns the original value of dst.*/