/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:41:36 by hucakmak          #+#    #+#             */
/*   Updated: 2022/11/18 22:41:37 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i = 0;
    int top = 0;
    int isaret = 1;

    while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
        i++;

    if (str[i] == '+' || str[i] == '-')
        if (str[i++] == '-')
            isaret = -1;

    while ((str[i] >= '0' && str[i] <= '9'))
        top = (str[i++] - '0') + (top * 10);
    return (top * isaret);
}
