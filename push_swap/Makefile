# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/19 08:49:17 by mdegache          #+#    #+#              #
#    Updated: 2024/12/19 15:55:25 by mdegache         ###   ########.fr        #
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
	nb_word_utils.c\
	check_error.c\
	Parsing.c\
	lst_utils.c\
	lst_utils_2.c\
	sort.c\
	To_sort.c\
	To_sort2.c\
	sort_funct_a.c\
	sort_funct_b.c\
	sort_funct_all.c\
	opti_rr.c\
	
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(PRINTF) $(OBJ)
		@$(CC) $(OBJ) $(CFLAGS) $(LIBFT) $(PRINTF) -o $@

$(LIBFT): 
		@$(MAKE) -C $(LIB) bonus

$(PRINTF):
		@$(MAKE) -C $(LIBBIS)

%.o: %.c
		@$(CC) $(CFLAGS) $(SRC) -I$(LIB) -I$(LIBBIS) -c $<

clean:
		@$(MAKE) -C $(LIB) clean
		@$(MAKE) -C $(LIBBIS) clean
		@rm -f $(OBJ)

fclean: clean
		@$(MAKE) -C $(LIB) fclean
		@$(MAKE) -C $(LIBBIS) fclean
		@rm -f $(NAME) $(OBJ)

re: fclean all
 .PHONY: clean fclean all re