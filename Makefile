# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamssafi <aamssafi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/18 21:41:24 by aamssafi          #+#    #+#              #
#    Updated: 2021/12/20 19:07:10 by aamssafi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc 
SRC = ft_printf.c ft_putstr.c ft_convert.c ft_putchar.c ft_putnbr.c \
		ft_strlen.c ft_decmln.c ft_convup.c

OBJS = ${SRC:.c=.o}
CFLAGS = -Wall -Wextra -Werror 

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rc $(NAME) $(OBJS)

$(OBJS) :
	$(CC) -c $(CFLAGS) $(SRC)

clean : 
	rm -f $(OBJS)

fclean : clean 
	rm -f $(NAME)

re : fclean all 

.PHONY : all clean fclean re 
