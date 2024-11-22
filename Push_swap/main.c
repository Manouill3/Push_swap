
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

#include "libft.h"
#include "push_swap.h"
#include <stdio.h>

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
int	*make_list(char **tab, int *list, int nb_word)
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

int	main(int ac, char **av)
{
	int	nb_word;
	char	**tab;
	int	*list;
	
	tab = NULL;
	list = NULL;
	if (ac > 1)
	{
		nb_word = total_word(av);
		list = malloc(sizeof(int) * nb_word);
		tab = parsing(nb_word, av, tab);
		if (error_numb(tab, nb_word) == 0)
			printf("%s", "Error\nOne arg is not a number\n");
		else
		{
			list = make_list(tab, list, nb_word);
			if (error_double(list, nb_word) == 0)
				printf("%s", "Error\nTwo int are similar\n");
		}
		free (list);
		free(tab);
	}
}
