# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/19 08:49:17 by mdegache          #+#    #+#              #
#    Updated: 2024/11/20 08:31:45 by mdegache         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc -c
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs

SRC = 

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		@$(MAKE) -C libft/ re
		$(CC) $(SRC) $(CFLAGS) -L libft/ -lft
		$(AR) $(NAME) -o $^

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME) $(OBJ)

re: fclean all
 .PHONY: clean fclean all re