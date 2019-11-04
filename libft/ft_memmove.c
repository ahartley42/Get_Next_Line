/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:44:57 by ahartley          #+#    #+#             */
/*   Updated: 2019/06/11 14:00:57 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned const char	*go;
	unsigned char		*end;

	i = 0;
	if (!dst && !src)
		return (NULL);
	go = (unsigned const char *)src;
	end = (unsigned char *)dst;
	if (len == 0)
		return (dst);
	if (src < dst)
		while (len > 0)
		{
			len--;
			end[len] = go[len];
		}
	else
		while (i < len)
		{
			end[i] = go[i];
			i++;
		}
	return (dst);
}

/*
** len bytes of src is copied over to dst
*/
