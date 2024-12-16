/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:28:22 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/16 13:43:34 by mdegache         ###   ########.fr       */
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
int		error_arg(char **tab, char **av, int nb_word);
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
void    rr_no_print(t_list **stack_a, t_list **stack_b);
void    rrr_no_print(t_list **stack_a, t_list **stack_b);
int	    ft_min(t_list *stack);
int	    ft_max(t_list *stack);
int     ft_index(t_list *stack, int c);
void	val_top(t_list **stack, int val, char s);
void    sup_top_a(t_list **stack_a, int val);
int	    count_val_to_top(t_list **stack, int val);
int     count_sup_to_top(t_list **stack_b, t_list **stack_a, int val);
int	    nb_move(t_list *stack_a, t_list *stack_b, int val);
void    sup_top_b(t_list **stack_b, int val);
int     find_place_b(t_list *stack_b, int val);
int     ft_strlen_number(char *str);
int     find_place_a(t_list *stack_a, int val);
void    check_rr_rrr(t_list **stack_a, t_list **stack_b, int val_a, int val_b);
void    add_rrr(t_list **stack_a, t_list **stack_b, int i, int j);
void    add_rr(t_list **stack_a, t_list **stack_b, int i, int j);
int    count_check_rr_rrr(t_list **stack_a, t_list **stack_b, int val_a, int val_b);
int    count_add_rrr(t_list **stack_a, t_list **stack_b, int i, int j);
int    count_add_rr(t_list **stack_a, t_list **stack_b, int i, int j);
int    find_sup(t_list *stack, int val);
t_list *copy_stack(t_list *stack);
int len_arg(char *str);

#endif