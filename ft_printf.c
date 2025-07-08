/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agranjon <agranjon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:57:35 by agranjon          #+#    #+#             */
/*   Updated: 2023/11/21 16:35:16 by agranjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_format(char format, va_list parameters)
{
	int	size;

	size = 0;
	if (format == 'c')
		size += ft_putchar(va_arg(parameters, int));
	if (format == 's')
		size += ft_putstr(va_arg(parameters, char *));
	if (format == 'p')
		size += ft_putnbr_ptr(va_arg(parameters, void *));
	if (format == 'd' || format == 'i')
		size += printf_print_numbers(va_arg(parameters, unsigned int));
	if (format == 'u')
		size += printf_print_numbers_unsigned(va_arg(parameters, unsigned int));
	if (format == 'x' || format == 'X')
		size += ft_putnbr_hex(va_arg(parameters, unsigned int), format);
	if (format == '%')
		size += ft_putchar('%');
	return (size);
}

int	ft_printf(const char *args, ...)
{
	int		i;
	int		size;
	va_list	parameters;

	i = 0;
	size = 0;
	if (!args)
		return (-1);
	va_start(parameters, args);
	while (args[i])
	{
		if (args[i] == '%')
		{
			size += get_format(args[i + 1], parameters);
			i++;
		}
		else
		{
			size += ft_putchar(args[i]);
		}
		i++;
	}
	va_end(parameters);
	return (size);
}
