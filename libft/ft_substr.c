/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:45:26 by hucakmak          #+#    #+#             */
/*   Updated: 2022/11/18 22:45:27 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *yeni;
    size_t i = 0;
    size_t t = ft_strlen(s) - start + 1;
    if(ft_strlen(s) < start)
        { 
            yeni = ft_calloc(1,1);
            return(yeni);
        }
    if(t < len)
        {
           yeni = ft_calloc(sizeof(char),t);
        }
    else
    {    
        yeni = ft_calloc(sizeof(char),len);
    }

    while(s[start] != 0 && i < len)
    {
        yeni[i++] = s[start++];
    }
    yeni[i] = 0;
    return(yeni);
}


