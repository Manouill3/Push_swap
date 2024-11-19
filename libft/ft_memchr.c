/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdegache <mdegache@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 07:43:03 by mdegache          #+#    #+#             */
/*   Updated: 2024/10/21 16:01:10 by mdegache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*t;

	i = 0;
	t = s;
	while (i < n)
	{
		if (t[i] == (unsigned char)c)
			return ((char *) &s[i]);
		i++;
	}
	return (0);
}
