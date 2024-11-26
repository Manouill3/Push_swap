/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:28:22 by mdegache          #+#    #+#             */
/*   Updated: 2024/11/26 08:58:11 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H

# include "stdlib.h"

typedef struct s_stack
{
        int				value;
		struct s_stack	*next;
        struct s_stack  *prev;
}	t_stack;

char	**parsing(int nb_word, char **av, char **tab);
int	    is_whitespace(char c);
int	    count_word(char *str);
int	    total_word(char **av);
int     error_numb(char **tab, int nb_word);
int     error_double(int *list, int nb_word);
int     *arg_to_list(int ac, char **av);
int     *make_list(char **tab, int *list, int nb_word);

#endif