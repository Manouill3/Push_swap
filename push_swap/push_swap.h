/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togauthi <togauthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:28:22 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/11 15:30:42 by togauthi         ###   ########.fr       */
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
t_list  *list_to_stack(long *list, t_list *stack_a, int nb_word);
int		total_word(char **av);
int		count_word(char *str);
int		error_arg(char **tab, int nb_word);
int		error_double(long *list, int nb_word);
int     check_char(char **tab, int i);
void	print_stack(t_list *stack);
void    free_all(char **tab, int nb_word);
int	    is_whitespace(char c);
int     a_is_sorted(t_list *stack_a);
void    ft_sort(t_list **stack_a, t_list **stack_b, int nb_word);
void    sort_small_stack(t_list **stack_a, int nb_word);
void    sort_big_stack(t_list **stack_a, t_list **stack_b);
void    push_b_till_3(t_list **stack_a, t_list **stack_b, int i);
void	sort_three(t_list **stack);
void	sort_three_mul(t_list **stack);
void    back_to_a(t_list **stack_a, t_list **stack_b);
void    swap_a(t_list **stack, int all);
void    push_a(t_list **stacksta, t_list **stackend);
void    rotate_a(t_list **stack, int all);
void    reverse_rotate_a(t_list **stack, int all);
void    swap_b(t_list **stack, int all);
void    push_b(t_list **stacksta, t_list **stackend);
void    rotate_b(t_list **stack, int all);
void    reverse_rotate_b(t_list **stack, int all);
void    swap_all(t_list **stack_a, t_list **stack_b);
void    rotate_all(t_list **stack_a, t_list **stack_b);
void    reverse_rotate_all(t_list **stack_a, t_list **stack_b);
int	    ft_min(t_list *stack);
int	    ft_max(t_list *stack);
int     ft_index(t_list *stack, int c);
void	val_top(t_list **stack, int val, char s);
void    sup_top_a(t_list **stack, int val);
int	    count_val_to_top(t_list *stack, int val);
int     count_sup_to_top(t_list *stack_b, int val);
int     rr_or_r(t_list *stack, int val);
int	    nb_move(t_list *stack_a, t_list *stack_b, int val);
void    sup_top_b(t_list **stack, int val);

#endif