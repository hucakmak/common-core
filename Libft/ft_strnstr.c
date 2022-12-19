/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <hucakmak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:04:18 by hucakmak          #+#    #+#             */
/*   Updated: 2022/12/18 14:30:20 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	check(const char *a, const char *b)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(b);
	i = 0;
	while (a[i] == b[i])
	{
		if (b[i] == b[len - 1])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (!*needle)
		return ((char *)(haystack));
	if (len == 0 || len < ft_strlen(needle))
		return (0);
	while (haystack[i] != 0 && i <= (len - ft_strlen(needle)))
	{
		while (haystack[i] == needle[0] && haystack[i] != 0)
		{
			if (check((haystack + i), needle) == 1)
				return ((char *)(haystack + i));
			i++;
		}
		i++;
	}
	return (0);
}
