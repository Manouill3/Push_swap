/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   To_sort2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 09:16:34 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/12 14:58:34 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sup_top_a(t_list **stack_a, int val)
{
    t_list  *curr;

    curr = *stack_a;
    while(curr->next)
        curr = curr->next;
    while ((*stack_a)->content < val || curr->content > val)
    {
        curr = *stack_a;
        while(curr->next)
            curr = curr->next;
        if ((*stack_a)->content > val && curr->content < val)
            break;
        if (find_place_a(*stack_a, val) > ft_lstsize(*stack_a) / 2 )
            reverse_rotate_a(stack_a, 1);
        else
            rotate_a(stack_a, 1);
    }
}
void    sup_top_b(t_list **stack_b, int val)
{
    t_list  *curr;

    curr = *stack_b;
    while(curr->next)
        curr = curr->next;
    while ((*stack_b)->content > val || curr->content < val)
    {
        curr = *stack_b;
        while(curr->next)
            curr = curr->next;
        if ((*stack_b)->content < val && curr->content > val)
            break;
        if (find_place_b(*stack_b, val) > ft_lstsize(*stack_b) / 2 )
            reverse_rotate_b(stack_b, 1);
        else
            rotate_b(stack_b, 1);
    }
}
void    back_to_a(t_list **stack_a, t_list **stack_b)
{
    ft_printf("\n");
    print_stack(*stack_b);
    ft_printf("\n");
    print_stack(*stack_a);
    ft_printf("\n");
    while (*stack_b)
    {
        if ((*stack_b)->content > ft_max(*stack_a) 
            || (*stack_b)->content < ft_min(*stack_a))
            val_top(stack_a, ft_min(*stack_a), 'a');
        else
            sup_top_a(stack_a, (*stack_b)->content);
        push_a(stack_b, stack_a);
        ft_printf("\n");
        print_stack(*stack_b);
        ft_printf("\n");
        print_stack(*stack_a);
        ft_printf("\n");
    }
    val_top(stack_a, ft_min(*stack_a), 'a');
}
