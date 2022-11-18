/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:45:04 by hucakmak          #+#    #+#             */
/*   Updated: 2022/11/18 22:45:05 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"

char kontrol(const char *a, const char *b)
{
	size_t i;
	i = 0;
	size_t len;
	len = strlen(b);
	while (a[i] == b[i])
	{
		if(b[i] == b[len - 1])
			return(1);
		i++;
	}
	return (0);
}

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	i = 0;
	char * empty = (char *)"";
	if(needle == empty)
	{
		return (char *)(haystack);
	}
	if(len == 0)
		return (0);

	while (haystack[i] != 0 && i <= (len - strlen(needle)))
	{
		while (haystack[i] == needle[0] && haystack[i] != 0)
		{
			if(kontrol((haystack + i),needle) == 1)
			{
				return (char *)(haystack + i);
			}
			i++;
		}
		i++;
	}
	return (0);
}
