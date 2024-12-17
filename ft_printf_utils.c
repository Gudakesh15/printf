/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaviral <aaviral@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:20:22 by aaviral           #+#    #+#             */
/*   Updated: 2024/12/17 15:27:11 by aaviral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <unistd.h>


void	ft_putchar(char c, size_t *len)
{
	write(1, &c, 1);
    (*len)++;
}

void    ft_putstr(char *str, size_t *len)
{
    while (*str)
	{
        write(1, str++, 1);
    	(*len)++;
	}
}

void	ft_putnbr(int n, size_t *len)
{
	char	digit;
	long	num;

	num = n;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -1 * num;
	}
	if (num > 9)
		ft_putnbr(num / 10, len);
	digit = num % 10 + '0';
	write(1, &digit, 1);
    (*len)++;
}

void	ft_putunbr(unsigned int n, size_t *len)
{
	char	digit;
	long	num;

	num = n;
	if (num > 9)
		ft_putnbr(num / 10, len);
	digit = num % 10 + '0';
	write(1, &digit, 1);
    (*len)++;
}