/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaviral <aaviral@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:25:00 by aaviral           #+#    #+#             */
/*   Updated: 2024/12/17 16:45:34 by aaviral          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdbool.h>
# include <limits.h>

void	ft_putchar(char c, size_t *len);
int		ft_printf(const char *str, ...);
void	ft_putstr(char *str, size_t *len);
void	ft_putnbr(int n, size_t *len);
void	ft_putunbr(unsigned int n, size_t *len);
void	ft_putnbrbase(unsigned int nbr, char *base, size_t *len);
void	ft_putptr(void *ptr, char *base, size_t *len);
void	find_type(char *str, va_list args, size_t *len);
void	ft_putptrbase(unsigned long nbr, char *base, size_t *len);

#endif
