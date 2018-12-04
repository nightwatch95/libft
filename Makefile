# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vjacks <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/23 21:22:33 by vjacks            #+#    #+#              #
#    Updated: 2018/11/24 18:17:05 by vjacks           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
HEADERS = libft.h

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) -I $(HEADERS) *.c
	ar rc $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f *.a

re:	fclean all
