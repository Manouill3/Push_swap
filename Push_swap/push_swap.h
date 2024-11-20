/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:28:22 by mdegache          #+#    #+#             */
/*   Updated: 2024/11/20 15:28:35 by mdegache         ###   ########.fr       */
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

#endif