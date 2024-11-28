# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/19 08:49:17 by mdegache          #+#    #+#              #
#    Updated: 2024/11/28 08:55:22 by mdegache         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Werror -Wextra -g
LIBFT = libft/libft.a
PRINTF = ft_printf/libftprintf.a
LIBBIS = ft_printf
LIB = libft
INC = .
SRC = main.c\
	side_funct.c\
	error.c\
	Parsing_arg.c\
	sort_funct.c\

OBJ = $(SRC:.c=.o)

all: $(LIBFT) $(PRINTF) $(NAME)

$(NAME): $(OBJ)
		$(CC) $(OBJ) $(CFLAGS) -L$(LIB) -L$(LIBBIS) -lft -o $@

$(LIBFT): 
		@$(MAKE) -C $(LIB) bonus

$(PRINTF):
		@$(MAKE) -C $(LIBBIS)

%.o:%.c
	$(CC) $(CFLAGS) -I$(INC) -I$(LIB) -o $@ -c $<

clean:
		@$(MAKE) -C $(LIB) clean
		@$(MAKE) -C $(LIBBIS) clean
		rm -f $(OBJ)

fclean: clean
		@$(MAKE) -C $(LIB) fclean
		@$(MAKE) -C $(LIBBIS) fclean
		rm -f $(NAME) $(OBJ)

re: fclean all
 .PHONY: clean fclean all re