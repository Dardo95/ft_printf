# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryner <ryner@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 19:18:42 by rmunoz-c          #+#    #+#              #
#    Updated: 2024/11/07 13:48:53 by ryner            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libftprintf.a

LIBFT_DIR= libft
LIBFT = $(LIBFT_DIR)/libft.a

AR= ar -rcs

CC= cc
CFLAGS= -Wall -Werror -Wextra

SRC=		ft_printf.c \
			ft_printf_num.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ) ft_printf.h
	$(AR) $(NAME) $(OBJ)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)
	cp $(LIBFT) $(NAME)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -o $@ $< -c

clean:
	rm -f $(OBJ)
	$(MAKE) fclean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.DEFAULT_GOAL: all

.PHONY: all clean fclean re
