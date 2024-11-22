/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:28:22 by mdegache          #+#    #+#             */
/*   Updated: 2024/11/22 10:17:12 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H

# include "stdlib.h"

typedef struct s_stack
{
        int				value;
		struct s_stack	*next;
}	t_stack;

char	**parsing(int nb_word, char **av, char **tab);
int	    is_whitespace(char c);
int	    count_word(char *str);
int	    total_word(char **av);
int     error_numb(char **tab, int nb_word);
int error_double(int *list);

#endif