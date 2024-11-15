/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:59:24 by enogueir          #+#    #+#             */
/*   Updated: 2024/11/07 16:55:19 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(char const *str, ...);
int		ft_var_opt(va_list args, const char format);
size_t	ft_putnbr_hex(size_t n, int uppercase);
size_t	ft_putptr(size_t ptr);

#endif
