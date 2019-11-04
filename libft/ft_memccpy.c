/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:56:15 by ahartley          #+#    #+#             */
/*   Updated: 2019/06/11 11:30:22 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t					i;
	unsigned const char		*go;
	unsigned char			*end;

	i = 0;
	if (!dst && !src && n != 0)
		return (NULL);
	go = (unsigned const char *)src;
	end = (unsigned char *)dst;
	while (i < n)
	{
		end[i] = go[i];
		if (go[i] == (unsigned char)c)
		{
			end[i] = go[i];
			return ((void *)&end[i + 1]);
		}
		i++;
	}
	return (NULL);
}

/*
** "go" represents src, "end" represents dst
** char pointer casting done for void pointer conversion
** int casting done for int/size_t comparison
** original function takes 'c' as an unsigned char
** pointer to byte AFTER 'c' is returned, hence address of i + 1
*/
