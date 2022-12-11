/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:21:51 by hucakmak          #+#    #+#             */
/*   Updated: 2022/12/06 17:23:37 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			new_c;
	unsigned char	*str1;
	size_t			i;

	i = 0;
	new_c = c;
	str1 = (unsigned char *)s;
	while (i < n)
	{
		if (str1[i] == new_c)
			return (str1 + i);
		i++;
	}
	return (0);
}
