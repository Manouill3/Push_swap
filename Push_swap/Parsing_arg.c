/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parsing_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 08:12:48 by mdegache          #+#    #+#             */
/*   Updated: 2024/11/27 14:38:36 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*list_to_stack(long *list, t_list *stack_a, int nb_word)
{
	int	i;
	
	i = 0;
	while (i < nb_word)
	{
		ft_lstadd_front(&stack_a, ft_lstnew(list[i]));
		i++;
	}
	return (stack_a);
}

long *arg_to_list(int ac, char **av)
{
	int	nb_word;
	char	**tab;
	long	*list;
	
	tab = NULL;
	list = NULL;
	if (ac > 1)
	{
		nb_word = total_word(av);
		list = malloc(sizeof(long) * nb_word);
		tab = parsing(nb_word, av, tab);
		if (error_numb(tab, nb_word) == 0)
			ft_printf("%s", "Error\n");
		else
		{
			list = make_list(tab, list, nb_word);
			if (error_double(list, nb_word) == 0)
				ft_printf("%s", "Error\n");
		}
		free(tab);
	}
	return (list);
}

long	*make_list(char **tab, long *list, int nb_word)
{
	int	i;

	i = 0;
	while (i < nb_word)
	{
		list[i] = ft_atoi(tab[i]);
		i++;
	}
	return(list);
}

char	**parsing(int nb_word, char **av, char **tab)
{
	int	i;
	int	j;
	int	k;
	char	**tmp_tab;

	i = 1;
	tab = malloc(sizeof(char *) * nb_word + 1);
	if (!tab)
		return (NULL);
	k = 0;
	while (av[i])
	{
		if (count_word(av[i]) > 1)
		{
			j = 0;
			tmp_tab = ft_split(av[i], ' ');
			while (tmp_tab[j])
				tab[k++] = tmp_tab[j++];
		}
		else
			tab[k++] = av[i];
		i++;
	}
	return (tab);
}