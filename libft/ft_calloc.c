/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:41:58 by hucakmak          #+#    #+#             */
/*   Updated: 2022/11/18 22:42:00 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

void *ft_calloc(size_t count, size_t size)
{
    char *ptr = malloc(count * size);
    size_t k = 0;
    if (!ptr)
        return (NULL);
    while(k <= count * size)
    {
        ptr[k++] = 0;
    }
    return (ptr);
}
