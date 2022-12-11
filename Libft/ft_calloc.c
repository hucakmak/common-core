/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:07:02 by hucakmak          #+#    #+#             */
/*   Updated: 2022/12/06 17:09:08 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	k;

	ptr = malloc(count * size);
	k = 0;
	if (!ptr)
		return (NULL);
	while (k <= count * size)
		ptr[k++] = 0;
	return (ptr);
}
