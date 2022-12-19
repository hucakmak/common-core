/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:31:30 by hucakmak          #+#    #+#             */
/*   Updated: 2022/12/13 23:04:56 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)

{
	size_t		i;

	i = 0;
	if (dst == src || !len)
		return (dst);
	if (src < dst)
	{
		while (len > 0)
		{
			*(char *)(dst + (len - 1)) = *(const char *)(src + (len - 1));
			len--;
		}
	}
	else
	{
		while (len > i)
		{
			*(char *)(dst + i) = *(const char *)(src + i);
			i++;
		}
	}
	return (dst);
}
