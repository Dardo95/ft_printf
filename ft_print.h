/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enogueir <enogueir@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:59:24 by enogueir          #+#    #+#             */
/*   Updated: 2024/10/31 13:16:31 by enogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_printf(char const *, ...);
void	ft_putchar(char c);
void	ft_putstr(char *s);
size_t	ft_strlen(char *s);
char	*ft_num_ent(int n);
void	ft_ptr(void *);

#endif
