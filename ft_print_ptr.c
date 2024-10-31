/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:07:01 by enogueir          #+#    #+#             */
/*   Updated: 2024/10/31 16:08:51 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

static void	ft_putc(char c)
{
	write(1, &c, 1);
}

static void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_ptr(void *)
{
	unsigned long	address;

}
