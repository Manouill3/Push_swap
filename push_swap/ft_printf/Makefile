# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/18 10:34:11 by mdegache          #+#    #+#              #
#    Updated: 2024/12/19 09:11:17 by mdegache         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc -c
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs

SRC = ft_printf.c\
		params.c\
		params2.c\
		side_func.c\
		side_pointer.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		@$(CC) $(SRC) $(CFLAGS)
		@$(AR) $(NAME) -o $^

clean:
		@rm -f $(OBJ)
    
fclean: clean
		@rm -f $(NAME) $(OBJ)
    
re: fclean all
 .PHONY: clean fclean all re