/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:44:19 by hucakmak          #+#    #+#             */
/*   Updated: 2022/11/18 22:44:21 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;
	char new_c;

	new_c = c;
	if (s == NULL)
		return (NULL);

	i = 0;
	while (s[i] == new_c || s[i] != 0)
	{
		if (s[i] == new_c)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	return (NULL);
}
