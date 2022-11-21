/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <hucakmak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:41:20 by hucakmak          #+#    #+#             */
/*   Updated: 2022/11/22 01:42:49 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	uzunluk_bul(char const *str, char c)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (str[i++] != c && str[i] != 0)
		a++;
	return (a + 1);
}

int	konum_bul(char const *str, char c)
{
	int	state;
	int	i;

	state = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			state = 0;
		else if (state == 0)
		{
			state = 1;
			return (i);
		}
		i++;
	}
	return (0);
}

int	countwords(char const *str, char c)
{
	int	state;
	int	wc;
	int	i;

	state = 0;
	wc = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			state = 0;
		else if (state == 0)
		{
			state = 1;
			wc++;
		}
		i++;
	}
	return (wc);
}
// 0 = knm, 1 = t

char	**ft_split(char const *s, char c)
{
	char	**arr_2d;
	int		t[2];
	int		cw;
	int		j;
	int		i;

	cw = countwords(s, c);
	arr_2d = malloc(cw * sizeof(char *) + 1);
	i = 0;
	j = 0;
	t[0] = 0;
	while (i < cw)
	{
		t[1] = 0;
		j += t[0];
		t[0] = konum_bul (&s[j], c);
		arr_2d[i] = malloc (uzunluk_bul(&s[j], c));
		while (s[t[0] + j] != c && s[t[0] + j] != 0)
			arr_2d[i][t[1]++] = s[t[0]++ + j];
		arr_2d[i++][t[0]] = 0;
	}
	arr_2d[cw] = 0;
	return (arr_2d);
}
