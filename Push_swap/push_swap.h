/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:28:22 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/03 14:11:34 by mdegache         ###   ########.fr       */
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
void	sort_two(t_list **stack);
int     ft_min(t_list *stack);
int     ft_max(t_list *stack);
int     find_index(t_list *stack, int nbr);
int     ft_find_place(t_list *stack, int nbr);
int     ft_case_rarb_a(t_list *stack_a, t_list *stack_b, int c);
int     ft_case_rrarrb_a(t_list *stack_a, t_list *stack_b, int c);
int     ft_case_rarrb_a(t_list *stack_a, t_list *stack_b, int c);
int     ft_case_rrarb_a(t_list *stack_a, t_list *stack_b, int c);
int     ft_case_rarb(t_list *stack_a, t_list *stack_b, int c);
int     ft_case_rrarrb(t_list *stack_a, t_list *stack_b, int c);
int     ft_case_rarrb(t_list *stack_a, t_list *stack_b, int c);
int     ft_case_rrarb(t_list *stack_a, t_list *stack_b, int c);
int     ft_rotate_type_ba(t_list *stack_a, t_list *stack_b);
int     ft_rotate_type_ab(t_list *stack_a, t_list *stack_b);
int     ft_apply_rarb(t_list **stack_a, t_list **stack_b, int c, char s);
int     ft_apply_rrarrb(t_list **stack_a, t_list **stack_b, int c, char s);
int     ft_apply_rrarb(t_list **stack_a, t_list **stack_b, int c, char s);
int     ft_apply_rarrb(t_list **stack_a, t_list **stack_b, int c, char s);
void    sort_b_till_3(t_list **stack_a, t_list **stack_b);
void    ft_sort_b(t_list **stack_a, t_list **stack_b);
void    ft_sort_a(t_list **stack_a, t_list **stack_b);
void	ft_sort(t_list **stack_a, t_list **stack_b, int nb_word);
int     ft_checksorted(t_list *stack_a);


#endif