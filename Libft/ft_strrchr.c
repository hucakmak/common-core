/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <hucakmak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:12:09 by hucakmak          #+#    #+#             */
/*   Updated: 2022/12/18 13:01:36 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			new_c;

	new_c = c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == new_c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
