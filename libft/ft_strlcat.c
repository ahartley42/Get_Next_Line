/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 08:59:01 by ahartley          #+#    #+#             */
/*   Updated: 2019/06/07 17:13:46 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dst[i] && i < (int)dstsize)
		i++;
	while (src[j] && i + j < (int)dstsize - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < (int)dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*
** i = dst index
** j = src index
** i + j = dst index after dst iteration
** return value is what was TRIED to be appended
** what is ACTUALLY appended is done but NOT returned
*/
