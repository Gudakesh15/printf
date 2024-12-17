/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaviral <aaviral@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:33:16 by aaviral           #+#    #+#             */
/*   Updated: 2024/12/17 16:35:59 by aaviral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrbase(unsigned int nbr, char *base, size_t *len)
{
	char	result;

	if (nbr >= 16)
		ft_putnbrbase(nbr / 16, base, len);
	result = base[nbr % 16];
	write(1, &result, 1);
	(*len)++;
}

void	ft_putptrbase(unsigned long nbr, char *base, size_t *len)
{
	char	result;

	if (nbr >= 16)
		ft_putptrbase(nbr / 16, base, len);
	result = base[nbr % 16];
	write(1, &result, 1);
	(*len)++;
}

void	ft_putptr(void *ptr, char *base, size_t *len)
{
	unsigned long int	nbr;

	if (!ptr)
	{
		ft_putstr("(nil)", len);
		return ;
	}
	ft_putstr("0x", len);
	nbr = (unsigned long int)ptr;
	ft_putptrbase(nbr, base, len);
}
