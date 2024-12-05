/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:28:22 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/05 22:43:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# include "stdlib.h"
# include "libft/libft.h"

long	*arg_to_list(char **av, int nb_word);
char	**arg_to_tab(char **av, int nb_word);
long	*tab_to_list(char **tab, long *list, int nb_word);
int		total_word(char **av);
int		count_word(char *str);
int		error_arg(char **tab);
int		error_double(long *list, int nb_word);
t_list  *list_to_stack(long *list, t_list *stack_a, int nb_word);
void	print_stack(t_list *stack);
void    free_all(char **tab, int nb_word);
int	is_whitespace(char c);

#endif