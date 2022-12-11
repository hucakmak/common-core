/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 21:25:37 by hucakmak          #+#    #+#             */
/*   Updated: 2022/12/06 21:26:27 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	a;

	a = ft_strlen(s);
	write(fd, s, a);
	write(fd, "\n", 1);
}
