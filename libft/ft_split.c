/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <hucakmak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:41:20 by hucakmak          #+#    #+#             */
/*   Updated: 2022/11/20 00:10:56 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"


// Kelime sayısı
// kelime sayısı kadar çift pointerli dizinin içinde char * yer aç
// her bir kelimenin lenini bulup yer acmak
// sırasıyla çift pointlerli dizinin içindeki tek pointerli char * 'a yer aç
//

int konum_bul(char const *str, char c)
{
    while (c!)
    {
        /* code */
    }
    
}

int countWords(char const *str, char c)
{
    int state;
    int wc;
    int i;

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
    return wc;
}


char **ft_split(char const *s, char c)
{
    char **arr_2d;
    char *tmp = strdup(s);
    int cw;
    int i;
    int j;
    
    cw = countWords(s, c);
    if (cw == 0)
        return (0);
    arr_2d = malloc(cw * sizeof(char *) + 1);
    if (!arr_2d)
        return (0);
    i = 0;
    j = 0;
    while (i < cw)
    {
        while (tmp[j] != c && tmp[j] != 0)
            j++;
        tmp[j] = 0;
        arr_2d[i] = strdup(tmp);
        j++;
        i++;
    }
    free(tmp);
    arr_2d[cw] = 0;
    return (arr_2d);
}
