# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/19 08:49:17 by mdegache          #+#    #+#              #
#    Updated: 2024/11/26 14:38:16 by mdegache         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Werror -Wextra -g
LIBFT = libft/libft.a
LIB = libft
INC = .
SRC = main.c\
	side_funct.c\
	error.c\
	Parsing_arg.c\
	sort_funct.c\

OBJ = $(SRC:.c=.o)

all: $(LIBFT) $(NAME)

$(NAME): $(OBJ)
		$(CC) $(OBJ) $(CFLAGS) -L$(LIB) -lft -o $@

$(LIBFT): 
		@$(MAKE) -C $(LIB) bonus

%.o:%.c
	$(CC) $(CFLAGS) -I$(INC) -I$(LIB) -o $@ -c $<

clean:
		@$(MAKE) -C $(LIB) clean
		rm -f $(OBJ)

fclean: clean
		@$(MAKE) -C $(LIB) fclean
		rm -f $(NAME) $(OBJ)

re: fclean all
 .PHONY: clean fclean all re