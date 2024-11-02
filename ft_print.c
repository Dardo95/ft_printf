/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:59:36 by enogueir          #+#    #+#             */
/*   Updated: 2024/11/02 13:52:52 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int ft_var_opt(va_list args, const char format)
{
	int	len;

	len = 0;

	if (format == 'c')
		len += ft_putchar_fd(va_arg(args, int), 1);
	else if (format == 's')
		len += ft_putstr_fd(va_arg(args,  char *), 1);
	else if (format == 'p')
		len += ft_putptr((size_t)va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		len += ft_putnbr_fd(va_arg(args, int), 1);
	else if (format == 'u')
		len += ft_putnbr_fd(va_arg(args, unsigned int), 1);
	else if (format == 'x')
		len += ft_putnbr_hex(va_arg(args, unsigned int), 0);
	else if (format == 'X')
		len += ft_putnbr_hex(va_arg(args, unsigned int), 1);
	else if (format == '%')
		len += ft_putchar_fd(va_arg(args, int), 1);
	return (len);
}

int	ft_printf(char const *str, ...)
{
	int i;
	int len;
	va_list args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_var_opt(args, str[i + 1]);
			i++;
		}
		else
			len += ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}


int	main(void)
{
	char c;

	c = 0;
	ft_printf("hello %c", c);
}
