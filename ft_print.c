/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:59:36 by enogueir          #+#    #+#             */
/*   Updated: 2024/11/01 18:18:52 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int ft_var_opt(va_list args, const char format)
{
	int	len;

	len = 0;
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
}
