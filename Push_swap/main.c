
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:29:04 by mdegache          #+#    #+#             */
/*   Updated: 2024/11/19 14:06:43 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list *stack)
{
	t_list	*curr;

	curr = stack;
	while (curr)
	{
		printf("%d |\n", curr->content);
		curr = curr->next;
	}
}

int	main(int ac, char **av)
{
	int	*list;
	t_list	*stack_a;
	t_list	*stack_b;
	int		nb_word;

	nb_word = total_word(av);
	stack_a = NULL;
	stack_b = NULL;
	list = arg_to_list(ac, av);
	stack_a = list_to_stack(list, stack_a, nb_word);
	print_stack(stack_a);
	stack_b = push_x(stack_a, stack_b);
	ft_lstdelone(stack_a);
	print_stack(stack_a);
	print_stack(stack_b);
	
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	free(list);
}
