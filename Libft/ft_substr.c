/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:22:21 by hucakmak          #+#    #+#             */
/*   Updated: 2022/12/12 02:00:08 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;
	size_t	t;

	i = 0;
	t = ft_strlen(s) - start + 1;
	if (ft_strlen(s) < start)
	{
		new = ft_calloc(1, 1);
		return (new);
	}
	if (t < len)
		new = ft_calloc(sizeof(char), t);
	else
		new = ft_calloc(sizeof(char), len);
	while (s[start] != 0 && i < len)
		new[i++] = s[start++];
	new[i] = 0;
	return (new);
}
