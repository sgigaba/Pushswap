# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgigaba <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/08 08:20:50 by sgigaba           #+#    #+#              #
#    Updated: 2018/06/30 12:30:10 by sgigaba          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC = *.c

OBJ = *.o

HEADER = libft.h

HEADERFLAGS = $(addprefix -I , $(HEADER))

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC) $(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(OBJ) $(NAME)

re: fclean all
