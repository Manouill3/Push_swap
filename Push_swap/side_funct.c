/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   side_funct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:34:01 by mdegache          #+#    #+#             */
/*   Updated: 2024/11/26 09:22:33 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_whitespace(char c)
{
	return (c == 32 || (c > 8 && c < 14));
}

int	count_word(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] && !is_whitespace(str[i]))
		{
			if (is_whitespace(str[i + 1]) || str[i + 1] == '\0')
				count++;
		}
		i++;
	}
	return (count);
}

int	total_word(char **av)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	while (av[i])
	{
		if (count_word(av[i]) <= 1)
			count++;
		else	
			count += count_word(av[i]);
		i++;
	}
	return (count);
}