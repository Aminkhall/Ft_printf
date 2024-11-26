# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkhallou <mkhallou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/25 19:43:59 by mkhallou          #+#    #+#              #
#    Updated: 2024/11/25 20:03:12 by mkhallou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCMAN = ft_printf.c  ft_put_unnmb.c  ft_putaddress.c  ft_putchar.c  ft_puthex.c  ft_putnumber.c  ft_putstr.c


OBJMAN = $(SRCMAN:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror 
AR = ar cr
FRM = rm -rf

NAME = libftprintf.a
HEADER = ft_printf.h

all: $(NAME)

$(NAME): $(OBJMAN)
	$(AR) $(NAME) $(OBJMAN)


%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(FRM) $(OBJMAN)

fclean: clean
	$(FRM) $(NAME)

re: fclean all

.PHONY: all clean fclean re