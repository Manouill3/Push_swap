
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

int	main(int ac, char **av)
{
	long	*list;
	t_list	*stack_a;
	t_list	*stack_b;
	int		nb_word;

	if (ac > 1)
	{
	nb_word = total_word(av);
	stack_a = NULL;
	stack_b = NULL;
	list = arg_to_list(ac, av);
	stack_a = list_to_stack(list, stack_a, nb_word);
	print_stack(stack_a);
	ft_printf("\n");
	sort_stacks(&stack_a, &stack_b, nb_word);
	ft_printf("\n");
	print_stack(stack_a);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	free(list);
	}
	else
		ft_printf("Error\n");
}
