/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   side_funct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:34:01 by mdegache          #+#    #+#             */
/*   Updated: 2024/11/19 13:07:57 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > (size_t) - 1 / size)
		return (0);
	tab = malloc(nmemb * size);
	if (!tab)
		return (0);
	ft_bzero(tab, nmemb * size);
	return (tab);
}