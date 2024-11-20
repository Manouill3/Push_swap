# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 14:01:00 by mdegache          #+#    #+#              #
#    Updated: 2024/11/20 08:27:50 by mdegache         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc -c
CFLAGS = -Wall -Werror -Wextra -I.
AR = ar rcs

SRC = ft_atoi.c\
        ft_bzero.c\
        ft_isalnum.c\
        ft_isalpha.c\
        ft_isascii.c\
        ft_isdigit.c\
        ft_isprint.c\
        ft_memchr.c\
        ft_memcmp.c\
        ft_memcpy.c\
        ft_memmove.c\
        ft_memset.c\
        ft_strchr.c\
        ft_strlcat.c\
        ft_strlcpy.c\
        ft_strlen.c\
        ft_strncmp.c\
        ft_strnstr.c\
        ft_strrchr.c\
        ft_tolower.c\
        ft_toupper.c\
        ft_calloc.c\
        ft_strdup.c\
        ft_substr.c\
        ft_itoa.c\
        ft_putchar_fd.c\
        ft_putstr_fd.c\
        ft_putendl_fd.c\
        ft_putnbr_fd.c\
        ft_strjoin.c\
        ft_strmapi.c\
        ft_striteri.c\
        ft_strtrim.c\
        ft_split.c

OBJ = $(SRC:.c=.o)

BONUS = ft_lstnew_bonus.c\
	ft_lstadd_front_bonus.c\
	ft_lstsize_bonus.c\
	ft_lstlast_bonus.c\
	ft_lstadd_back_bonus.c\
	ft_lstdelone_bonus.c\
	ft_lstclear_bonus.c\
	ft_lstiter_bonus.c\
	ft_lstmap_bonus.c

OBJ_BONUS = $(BONUS:.c=.o) $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(SRC) $(CFLAGS)
		$(AR) $(NAME) -o $^

bonus : $(OBJ_BONUS)
	       	$(CC) $(SRC) $(BONUS) $(CFLAGS)
		$(AR) $(NAME) -o $^

clean:
		rm -f $(OBJ_BONUS)
    
fclean: clean
		rm -f $(NAME)
    
re: fclean all
