/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_print_numbers.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agranjon <agranjon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:19:31 by agranjon          #+#    #+#             */
/*   Updated: 2023/11/17 11:22:58 by agranjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_print_numbers(unsigned int nb)
{
	int		len;
	char	*str;

	len = 0;
	str = ft_itoa(nb);
	len = ft_putstr(str);
	free(str);
	return (len);
}

unsigned int	printf_print_numbers_unsigned(unsigned int nb)
{
	int		len;
	char	*str;

	len = 0;
	str = ft_uitoa(nb);
	len = ft_putstr(str);
	free(str);
	return (len);
}
