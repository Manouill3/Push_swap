/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 08:03:48 by mdegache          #+#    #+#             */
/*   Updated: 2024/10/14 08:28:12 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*a1;
	unsigned const char	*a2;

	i = 0;
	a1 = s1;
	a2 = s2;
	while (i < n)
	{
		if (a1[i] != a2[i])
			return ((unsigned char) a1[i] - a2[i]);
		i++;
	}
	return (0);
}
