
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

int	main(int ac, char **av)
{
	int	nb_word;
	char	**tab;
	int	i;
	int	j;
	
	tab = NULL;
	if (ac > 1)
	{
		nb_word = total_word(av);
		tab = parsing(nb_word, av, tab);
		i = 0;
		while (tab[i])
		{
			j = 0;
			while (tab[i][j])
			{
				printf("%c", tab[i][j]);
				j++;
			}
			printf("%s", "\n");
			i++;
		}
		free(tab);
	}
}
