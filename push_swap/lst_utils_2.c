/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togauthi <togauthi@student.42.fr>          +#+  +:+         +:+     */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 10:59:27 by mdegache          #+#    #+#             */
/*   Updated: 2024/12/11 15:49:57 by togauthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *copy_stack(t_list *stack)
{
    t_list *new_stack = NULL;
    t_list *tmp = stack;

    while (tmp)
    {
        ft_lstadd_back(&new_stack, ft_lstnew(tmp->content));
        tmp = tmp->next;
    }
    return new_stack;
}
int count_sup_to_top(t_list **stack_b, int val)
{
    t_list  *curr;
    int i;

    i = 0;
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
        if (find_place_b(*stack_b, val) + 1 > ft_lstsize(*stack_b) / 2 )
            reverse_rotate_b(stack_b, 0);
        else
            rotate_b(stack_b, 0);
        i++;
    }
    return (i);
}
/*{
    int i;

    i = 0;
    while ((*stack_b)->content < ft_max(*stack_b))
    {
        if (ft_index(*stack_b, ft_max(*stack_b)) > ft_lstsize(*stack_b) / 2)
            reverse_rotate_b(stack_b, 0);
        else
            rotate_b(stack_b, 0);
        i++;        
    }
    while ((*stack_b)->content < val)
    {
        if (find_place_b(*stack_a, val) > ft_lstsize(*stack_b) / 2)
            reverse_rotate_b(stack_b, 0);
        else
            rotate_b(stack_b, 0);
        i++;
    }
    return (i);
}*/
int find_place_a(t_list *stack_a, int val)
{
    int i;
    int size;

    i = 0;
    size = ft_lstsize(stack_a);
    if (!stack_a || !stack_a->next)
        return (0);
    while (i < size)
    {
        if (stack_a->content < val && stack_a->next->content > val)
            break;
        stack_a = stack_a->next;
        i++;
    }
    return (i);
}
int find_place_b(t_list *stack_b, int val)
{
    int i;
    int size;

    i = 0;
    size = ft_lstsize(stack_b);
    if (!stack_b || !stack_b->next)
        return (0);
    while (i < size)
    {
        if (stack_b->content > val && stack_b->next->content < val)
            break;
        stack_b = stack_b->next;
        i++;
    }
    return (i);
}
int find_sup(t_list *stack_b, int val)
{
    int i;
    int size;

    i = stack_b->content;
    size = ft_lstsize(stack_b);
    if (!stack_b || !stack_b->next)
        return (0);
    while (i < size)
    {
        if (stack_b->content > val && stack_b->next->content < val)
            break;
        stack_b = stack_b->next;
        i = stack_b->content;
    }
    return (i);
}