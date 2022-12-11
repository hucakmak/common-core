/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:18:53 by hucakmak          #+#    #+#             */
/*   Updated: 2022/12/07 12:25:37 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	n;
	char			*new;

	n = 0;
	i = ft_strlen(s);
	new = (char *)malloc(i + 1);
	if (!new)
		return (0);
	while (n < i)
	{
		new[n] = f(n, s[n]);
		n++;
	}
	new[n] = 0;
	return (new);
}
