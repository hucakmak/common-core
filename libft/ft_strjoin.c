/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:44:34 by hucakmak          #+#    #+#             */
/*   Updated: 2022/11/18 22:44:35 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    if(!s1 && !s2)
        return(0);
    char *yeni;
    int a = 0;
    int i = 0;
    a += ft_strlen(s1);
    a += ft_strlen(s2) + 1;

    yeni = ft_calloc(sizeof(char),a);
    while(s1[i] != 0)
    {
        yeni[i] = s1[i];
        i++;
    }
    int c = 0;
    while(s2[c] != 0)
    {
        yeni[i++] = s2[c++];
    }
    yeni[i] = 0;
    return(yeni);
}
