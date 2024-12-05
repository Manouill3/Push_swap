/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:41:29 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/05 13:52:21 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int a_is_sorted(t_list *stack_a)
{
    int	i;

	i = stack_a->content;
	while (stack_a)
	{
		if (i > stack_a->content)
			return (0);
		i = stack_a->content;
		stack_a = stack_a->next;
	}
	return (1);
}
void    push_b_till_3(t_list **stack_a, t_list **stack_b)
{
    int i;
    t_list  *tmp;
    
    while(ft_lstsize(*stack_a) > 3)
    {
        tmp = *stack_a;    
        
    }
}
void    sort_small_stack(t_list **stack_a, t_list **stack_b, int nb_word)
{
    if (nb_word == 2)
        swap_a(stack_a, 1);
    if (nb_word == 3)
        sort_three(stack_a);
}
void    sort_big_stack(t_list **stack_a, t_list **stack_b)
{
    push_b(stack_a, stack_b);
    push_b(stack_a, stack_b);
    if (ft_lstsize(*stack_a) > 3)
        push_b_till_3(stack_a, stack_b);
    
}
void    ft_sort(t_list **stack_a, t_list **stack_b, int nb_word)
{
    if (nb_word <= 3)
        sort_small_stack(stack_a, stack_b, nb_word);
    else
        sort_big_stack(stack_a, stack_b);
}