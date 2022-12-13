/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:45:53 by hucakmak          #+#    #+#             */
/*   Updated: 2022/12/13 22:36:33 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		a;
	int		i;
	int		c;

	if (!s1 && !s2)
		return (0);
	i = 0;
	a = ft_strlen(s1);
	a += ft_strlen(s2);
	new = ft_calloc(sizeof(char), a + 1);
	if (!new)
		return (0);
	while (s1[i] != 0)
	{
		new[i] = s1[i];
		i++;
	}
	c = 0;
	while (s2[c] != 0)
		new[i++] = s2[c++];
	new[i] = 0;
	return (new);
}
