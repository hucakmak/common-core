/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:27:04 by hucakmak          #+#    #+#             */
/*   Updated: 2022/12/13 22:37:02 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*a;
	const char	*b;
	size_t		i;

	if (dst == src || !n)
		return (dst);
	i = 0;
	b = src;
	a = dst;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}
