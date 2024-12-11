/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togauthi <togauthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 09:37:04 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/11 16:09:37 by togauthi         ###   ########.fr       */
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
void    push_b_till_3(t_list **stack_a, t_list **stack_b, int i)
{
    t_list  *tmp;

    tmp = *stack_a;
    while (tmp)
    {
        print_stack(*stack_b);
    
        if (nb_move(tmp, *stack_b, tmp->content) == i)
        {
            val_top(stack_a, tmp->content, 'a');
            if (tmp->content < ft_min(*stack_b) || tmp->content > ft_max(*stack_b))
		        val_top(stack_b, ft_max(*stack_b), 'b');
	        else
		        sup_top_b(stack_b, tmp->content);
            i = -1;
            push_b(stack_a, stack_b);
            tmp = *stack_a;
        }
        else
            tmp = tmp->next;
        ft_printf("\n");
    }
}
void    sort_big_stack(t_list **stack_a, t_list **stack_b)
{    
    t_list  *tmp;
    int     i;
    
    if (ft_lstsize(*stack_a) > 3 && !a_is_sorted(*stack_a))
        push_b(stack_a, stack_b);
    if (ft_lstsize(*stack_a) > 3 && !a_is_sorted(*stack_a))
        push_b(stack_a, stack_b);
    while (ft_lstsize(*stack_a) > 3 && !a_is_sorted(*stack_a))
    {
        tmp = *stack_a;
        i = nb_move(tmp, *stack_b, tmp->content);
        while (tmp && tmp->next)
        {
            if (nb_move(tmp, *stack_b, tmp->content) < i)
                i = nb_move(tmp, *stack_b, tmp->content);
            tmp = tmp->next;
        }
        push_b_till_3(stack_a, stack_b, i);    
    }
    sort_three(stack_a);
    back_to_a(stack_a, stack_b);
}
void    sort_small_stack(t_list **stack_a, int nb_word)
{
    if (nb_word == 2)
        swap_a(stack_a, 1);
    if (nb_word == 3)
        sort_three(stack_a);
}
void    ft_sort(t_list **stack_a, t_list **stack_b, int nb_word)
{
    if (nb_word <= 3 && !a_is_sorted(*stack_a))
        sort_small_stack(stack_a, nb_word);
    else if(nb_word > 3 && !a_is_sorted(*stack_a))
        sort_big_stack(stack_a, stack_b);
}
