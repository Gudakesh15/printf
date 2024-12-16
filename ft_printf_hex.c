
#include "printf.h"
#include <unistd.h>
void    ft_putstr(char *str, size_t *len);

void   ft_putnbrbase(unsigned int nbr, char *base, size_t *len)
{
    char    result;


    if (nbr >= 16)
        ft_putnbrbase(nbr / 16, base, len);
    result = base[nbr % 16];
    write(1, &result, 1);
    (*len)++;
}

void   ft_putptrbase(unsigned long nbr, char *base, size_t *len)
{
    char    result;

    if (nbr >= 16)
        ft_putptrbase(nbr / 16, base, len);
    result = base[nbr % 16];
    write(1, &result, 1);
    (*len)++;
}

void   ft_putptr(void *ptr, char *base, size_t *len)
{
    char    result;
    unsigned long int   nbr;

    if (!ptr)
    {
        ft_putstr("(nil)", len);
        return ;
    }
    ft_putstr("0x", len);
    nbr = (unsigned long int)ptr;
    ft_putptrbase(nbr, base, len);
}



