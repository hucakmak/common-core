/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucakmak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 22:42:58 by hucakmak          #+#    #+#             */
/*   Updated: 2022/11/18 22:43:01 by hucakmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c)

{
    if(32 <= c && c <= 126)
        return (1);
    else
        return (0);
}
