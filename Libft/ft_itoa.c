/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:43:03 by hucakmak          #+#    #+#             */
/*   Updated: 2022/12/11 22:17:11 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	size(int n)
{
	int	a;

	a = 0;
	if (n < 0 || n == 0)
		a++;
	while (n != 0)
	{
		n = n / 10;
		a++;
	}
	return (a);
}

char	number(char *nbr, int n, int i, int a)
{
	while (i < a)
	{
		if (n == -2147483648)
		{
			nbr[a-- - 1] = '8';
			n = n / 10;
		}
		else if (n < 0)
		{
			nbr[i++] = 45;
			n *= -1;
		}
		else
		{
			nbr[a-- - 1] = (n % 10) + 48;
			n = n / 10;
		}
	}
	return ((char)(nbr));
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int		i[2];

	i[1] = size(n);
	i[0] = 0;
	nbr = (char *)malloc(sizeof(char) * (i[1] + 1));
	nbr[i[1]] = 0;
	number(nbr, n, i[0], i[1]);
	return (nbr);
}
