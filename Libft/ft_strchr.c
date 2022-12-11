/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:41:44 by hucakmak          #+#    #+#             */
/*   Updated: 2022/12/06 17:42:17 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	new_c;

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
