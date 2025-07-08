/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agranjon <agranjon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:59:14 by agranjon          #+#    #+#             */
/*   Updated: 2023/11/21 16:35:23 by agranjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdint.h>
# include <stdlib.h>

int				ft_putnbr_hex(unsigned long n, char format);
int				ft_putnbr_ptr(void *ptr);
int				ft_printf(const char *args, ...);
int				ft_putchar(char c);
int				ft_putstr(char *str);
int				printf_print_numbers(unsigned int nb);
int				ft_putnbr_hex_ptr(uintptr_t n, char format);
unsigned int	printf_print_numbers_unsigned(unsigned int nb);
char			*ft_itoa(int n);
char			*ft_uitoa(unsigned int n);

#endif