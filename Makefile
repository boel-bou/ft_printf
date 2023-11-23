# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: boel-bou <boel-bou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/20 20:49:33 by boel-bou          #+#    #+#              #
#    Updated: 2023/11/23 02:40:07 by boel-bou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_putchar_pr.c ft_puthex_pr.c ft_putnbr_pr.c ft_putstr_pr.c ft_putuns_pr.c

OBJ = $(SRC:.c=.o)

CC	= cc

CFLAGS = -Wall -Wextra -Werror

.c.o : $(SRC)
	$(CC) $(CFLAGS) -c $^ -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
