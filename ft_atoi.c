/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:00:57 by hucakmak          #+#    #+#             */
/*   Updated: 2022/12/06 17:04:34 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	top;
	int	isaret;

	i = 0;
	top = 0;
	isaret = 1;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			isaret = -1;
	while ((str[i] >= '0' && str[i] <= '9'))
		top = (str[i++] - '0') + (top * 10);
	return (top * isaret);
}
