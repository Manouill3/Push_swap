/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:28:22 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/02 09:53:22 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# include "stdlib.h"
# include "libft/libft.h"

char	**parsing(int nb_word, char **av, char **tab);
int		is_whitespace(char c);
int		count_word(char *str);
int		total_word(char **av);
int		error_numb(char **tab, int nb_word);
int		error_double(long *list, int nb_word);
long	*arg_to_list(int ac, char **av);
long	*make_list(char **tab, long *list, int nb_word);
t_list	*list_to_stack(long *list, t_list *stack_a, int nb_word);
void	print_stack(t_list *stack);
void	swap_a(t_list **stack, int all);
void	push_a(t_list **stacksta, t_list **stackend);
void	rotate_a(t_list **stack, int all);
void	reverse_rotate_a(t_list **stack, int all);
void	swap_b(t_list **stack, int all);
void	push_b(t_list **stacksta, t_list **stackend);
void	rotate_b(t_list **stack, int all);
void	reverse_rotate_b(t_list **stack, int all);
void  	swap_all(t_list **stack_a, t_list **stack_b);
void  	rotate_all(t_list **stack_a, t_list **stack_b);
void  	reverse_rotate_all(t_list **stack_a, t_list **stack_b);
void	sort_three(t_list **stack);
void    sort_three_mul(t_list **stack);
void 	sort_stacks(t_list **stack_a, t_list **stack_b, int nb_word);

#endif