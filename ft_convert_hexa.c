/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agranjon <agranjon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:12:31 by agranjon          #+#    #+#             */
/*   Updated: 2023/11/17 11:22:28 by agranjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_putnbr_hex(unsigned long n, char format)
{
	char	*hex_digits;
	int		hex_size;

	hex_size = 0;
	hex_digits = "0123456789abcdef";
	if (format == 'X')
	{
		hex_digits = "0123456789ABCDEF";
	}
	if (n < 16)
	{
		hex_size += ft_putchar(hex_digits[n]);
	}
	else
	{
		hex_size += ft_putnbr_hex(n / 16, format);
		hex_size += ft_putchar(hex_digits[n % 16]);
	}
	return (hex_size);
}

int	ft_putnbr_hex_ptr(uintptr_t n, char format)
{
	char	*hex_digits;
	int		hex_size;

	hex_size = 0;
	hex_digits = "0123456789abcdef";
	if (format == 'X')
	{
		hex_digits = "0123456789ABCDEF";
	}
	if (n >= 16)
	{
		hex_size += ft_putnbr_hex(n / 16, format);
	}
	hex_size += ft_putchar(hex_digits[n % 16]);
	return (hex_size);
}

int	ft_putnbr_ptr(void *ptr)
{
	int	size;

	size = 0;
	if (!ptr)
	{
		size += ft_putstr("(nil)");
	}
	else
	{
		ft_putstr("0x");
		size = 2;
		size += ft_putnbr_hex((uintptr_t)ptr, 'x');
	}
	return (size);
}
