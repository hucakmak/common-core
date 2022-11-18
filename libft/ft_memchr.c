/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:43:07 by hucakmak          #+#    #+#             */
/*   Updated: 2022/11/18 22:43:09 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	char new_c;
	new_c = c;
	unsigned char *str1;
	str1 = (unsigned char *)s;

	size_t i = 0;

	while(i < n)
	{
		if(str1[i] == new_c)
		{
			return (str1 + i);
		}
		i++;
	}
	return (0);
}
