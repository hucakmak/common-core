/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <hucakmak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:41:20 by hucakmak          #+#    #+#             */
/*   Updated: 2022/11/21 17:14:04 by hucakmak         ###   ########.fr       */
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

int uzunluk_bul(char const *str, char c)
{
    int i = 0;
    int a = 0;

    while(str[i] != c && str[i] != 0)
    {
        i++;
        a++;
    }
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
            printf("i Başarı ile bulundu sonuç: %d\n",i);
            return (i);
        }
        i++;
    }
    printf("i Hesaplanırken Sona gelindi.");
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
    printf("countWord Başarıyla Hesaplandı. sonuç =%d\n",wc);
    return (wc);
}


char **ft_split(char const *s, char c)
{
    printf("split girildi\n");
    char **arr_2d;
    char *tmp = strdup(s);
    int cw;
    int i;
    int j;
    int knm;
    int t;
    
    printf("Count word Hesaplanacak.\n");
    cw = countWords(s, c);
    if (cw == 0)
    {
        arr_2d = 0;
        return (arr_2d);
    }
    printf("CountWord Geçildi Sonuç: %d\n",cw);
    arr_2d = malloc(cw * sizeof(char *) + 1);
    if (!arr_2d)
        return (0);
    printf("Yer Başarıyla Açıldı.\n");
    i = 0;
    j = 0;
    knm = 0;
    while (i < cw)
    {
        printf("%d. While Döngüsüne girildi\n",i+1);
        t = 0;
        j += knm;
        int len = 0;
        knm = konum_bul(&tmp[j], c);
        len = uzunluk_bul(&tmp[j],c);
        arr_2d[i] = malloc(len);
        printf("%d. Konum Bulundu.Sonuç: %d\n", i+1, knm);             
        while(tmp[knm + j] != c && tmp[knm + j] != 0)
        {
          printf("iç While Girildi.\n");
            printf("knm değeri:%d j değeri:%d\n", knm,j);
            arr_2d[i][t] = tmp[knm + j];
            knm++;
            t++;
        }
        printf("iç While Çıkıldı.\n");
        arr_2d[i][knm] = 0;
        i++;
    }
    free(tmp);
    arr_2d[cw] = 0;
    printf("return öncesine gelindi.\n");
    // printf("arr2d = %s\n",arr_2d[0]);
    return (arr_2d);
}
/*
int main()
{
    int i = 0;
    char const *selam = "     ";
    char c = ' ';
    ft_split(selam,c);
    return(0);
}
*/
