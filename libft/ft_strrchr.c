/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:45:13 by hucakmak          #+#    #+#             */
/*   Updated: 2022/11/18 22:45:14 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;
	char new_c;

	new_c = c;
	if (s == NULL)
		return (NULL);
	i = ft_strlen(s);
	while (s[i] == new_c || s[i] != s[0])
	{
		if (s[i] == new_c)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return (NULL);
}
