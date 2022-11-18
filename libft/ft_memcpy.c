/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:43:30 by hucakmak          #+#    #+#             */
/*   Updated: 2022/11/18 22:43:32 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void *ft_memcpy(void *dst, const void *src, size_t n)

{
    char *a;
    a = dst;
    const char *b;
    b = src;

    size_t i = 0;
    while(i < n)
    {
        a[i] = b[i];
        i++;
    }
    return (dst);
}
