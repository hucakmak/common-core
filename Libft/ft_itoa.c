/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:43:03 by hucakmak          #+#    #+#             */
/*   Updated: 2022/12/11 17:01:39 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	basamak(int n)
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

char	*ft_itoa(int n)
{
	char	*nbr;
	int		i[2];

	i[2] = basamak(n);
	i[1] = 0;
	nbr = malloc(sizeof(char) * (i[2] + 1));
	nbr[i[2]] = 0;
	while (i[1] < i[2])
	{
		if (n == -2147483648)
		{
			nbr[i[2]-- - 1] = '8';
			n = n / 10;
		}
		else if (n < 0)
		{
			nbr[i[1]++] = 45;
			n *= -1;
		}
		if (n >= 0)
		{
			nbr[i[2]-- - 1] = n % 10 + 48;
			n = n / 10;
		}
	}
	return (nbr);
}
