# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/23 09:13:10 by sgigaba           #+#    #+#              #
#    Updated: 2018/08/28 17:01:09 by sgigaba          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME2 = checker

NAME1 = push_swap

NAME3 = libft.a

SRC = src/operations/*.c src/funcs/*.c

HEADER = headers/pushswap.h

HEADERFLAGS = $(addprefix -I, $(HEADER))

all:
	make -C libft
	gcc -g -o $(NAME1) src/pushswap.c -Wall -Wextra -Werror libft/libft.a src/operations/*.c src/funcs/*.c
	gcc -g -o $(NAME2) src/checker.c -Wall -Wextra -Werror libft/libft.a $(SRC)
	@rm -rf push_swap.dSYM checker.dSYM

clean:
	make clean -C libft

fclean: clean
	rm -f $(NAME1) $(NAME2) $(NAME3)
	make fclean -C libft

re: clean all
	make re -C libft
