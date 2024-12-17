/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaviral <aaviral@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:12:00 by aaviral           #+#    #+#             */
/*   Updated: 2024/12/17 16:38:27 by aaviral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	find_type(char *str, va_list args, size_t *len)
{
	if (*str == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (*str == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (*str == 'i')
		ft_putnbr(va_arg(args, int), len);
	else if (*str == 'd')
		ft_putnbr(va_arg(args, int), len);
	else if (*str == 'u')
		ft_putunbr(va_arg(args, unsigned int), len);
	else if (*str == '%')
		ft_putchar('%', len);
	else if (*str == 'x')
		ft_putnbrbase(va_arg(args, unsigned int), "0123456789abcdef", len);
	else if (*str == 'X')
		ft_putnbrbase(va_arg(args, unsigned int), "0123456789ABCDEF", len);
	else if (*str == 'p')
		ft_putptr(va_arg(args, void *), "0123456789abcdef", len);
}

int	ft_printf(const char *str, ...)
{
	size_t	print_length;
	va_list	args;

	if (!str)
		return (0);
	print_length = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			find_type((char *)str, args, &print_length);
		}
		else
			ft_putchar(*str, &print_length);
		str++;
	}
	va_end(args);
	return (print_length);
}
