/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <hucakmak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:41:20 by hucakmak          #+#    #+#             */
/*   Updated: 2022/11/21 22:25:37 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int uzunluk_bul(char const *str, char c)
{
    int i = 0;
    int a = 0;

    while(str[i++] != c && str[i] != 0)
                a++;
    return (a + 1);
 }
 
int konum_bul(char const *str, char c)
{
    int state;
    int i;

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
    return (wc);
}

char **ft_split(char const *s, char c)
{
    char **arr_2d;
    char *tmp;
    int cw;
    int i;
    int j;
    int knm;
    int t;
    
    tmp = strdup(s);
    cw = countWords(s, c);
    arr_2d = malloc(cw * sizeof(char *) + 1);
    i = 0;
    j = 0;
    knm = 0;
    int len;
    while (i < cw)
    {
        t = 0;
        knm = konum_bul(&tmp[j += knm], c);
        len = uzunluk_bul(&tmp[j],c);
        arr_2d[i] = malloc(len);
        while(tmp[knm + j] != c && tmp[knm + j] != 0)
            arr_2d[i][t++] = tmp[knm++ + j];
        arr_2d[i++][knm] = 0;
    }
    free(tmp);
    arr_2d[cw] = 0;
    return (arr_2d);
}
/*
int main()
{
    int i = 0;
    char const *selam = "  tripouille  42  ";
    char c = ' ';
    ft_split(selam,c);
    return(0);
}
*/
