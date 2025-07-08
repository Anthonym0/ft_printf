/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_print_unsigned.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agranjon <agranjon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:16:59 by agranjon          #+#    #+#             */
/*   Updated: 2023/11/16 11:31:08 by agranjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len_int(unsigned int n)
{
	long long int	i;

	i = 1;
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	ft_fill_str(char *str, int size, unsigned int n)
{
	int	index;

	index = 0;
	str[size] = '\0';
	size = size -1;
	while (size >= index)
	{
		str[size] = n % 10 + '0';
		n = n / 10;
		size--;
	}
}

char	*ft_uitoa(unsigned int n)
{
	int		len_str;
	char	*str;

	len_str = ft_len_int(n);
	str = malloc(sizeof(char) * (len_str + 1));
	if (!str)
		return (NULL);
	ft_fill_str(str, len_str, n);
	str[len_str] = '\0';
	return (str);
}
