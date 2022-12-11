/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:45:53 by hucakmak          #+#    #+#             */
/*   Updated: 2022/12/06 18:55:27 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*yeni;
	int		a;
	int		i;
	int		c;

	if (!s1 && !s2)
		return (0);
	i = 0;
	a = 0;
	a += ft_strlen(s1);
	a += ft_strlen(s2) + 1;
	yeni = ft_calloc(sizeof(char), a);
	while (s1[i] != 0)
	{
		yeni[i] = s1[i];
		i++;
	}
	c = 0;
	while (s2[c] != 0)
		yeni[i++] = s2[c++];
	yeni[i] = 0;
	return (yeni);
}
