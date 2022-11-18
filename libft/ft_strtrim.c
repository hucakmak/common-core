/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:45:19 by hucakmak          #+#    #+#             */
/*   Updated: 2022/11/18 22:45:20 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	str_in_char(char const *set, char c)
{
	size_t	k;

	k = 0;
	while (set[k] != 0)
	{
		if (set[k] == c)
		{
			return (1);
		}
		k++;
	}
	return (0);
}

size_t trim_begin_count(char const *s1, char const *set)
{

	size_t	index_count;

	index_count = 0;
	while(str_in_char(set, s1[index_count]))
		index_count++;
	return (index_count);
}

 size_t trim_end_count(char const *s1, char const *set)
{
	size_t	index_count;
	size_t	slen;

	index_count = 0;
	slen = ft_strlen(s1) - 1;
	while(str_in_char(set, s1[slen]))
	{
		index_count++;
		slen--;
	}
	return (index_count);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t begin_i;
	size_t	end_i;
	char *newstr;
	size_t i;

	begin_i = trim_begin_count(s1, set);
	end_i = trim_end_count(s1, set);
    	if(ft_strlen(s1) <= begin_i + end_i)
		{
			newstr = malloc(1);
			newstr[0] = 0;
			return(newstr);
		}
	newstr = malloc(ft_strlen(s1) - end_i - begin_i + 1);
	if (!newstr)
		return (0);
	i = 0;
	while(begin_i < ft_strlen(s1) - end_i)
	{
		newstr[i] = s1[begin_i];
		i++;
		begin_i++;
	}
	newstr[i] = 0;
	return (newstr);
}
