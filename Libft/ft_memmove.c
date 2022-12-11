/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:31:30 by hucakmak          #+#    #+#             */
/*   Updated: 2022/12/06 17:34:01 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)

{
	char		*a;
	const char	*b;
	size_t		i;

	i = 0;
	b = src;
	a = dst;
	if (src < dst)
	{
		while (len > 0)
		{
			a[len - 1] = b[len - 1];
			len--;
		}
		return (dst);
	}
	else
	{
		while (i < len)
		{
			a[i] = b[i];
			i++;
		}
		return (dst);
	}
}
