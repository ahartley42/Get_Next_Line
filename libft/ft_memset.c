/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:07:24 by ahartley          #+#    #+#             */
/*   Updated: 2019/06/07 09:50:27 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*d;
	int				i;

	i = 0;
	d = (char *)b;
	while (i < (int)len)
	{
		d[i] = (unsigned char)c;
		i++;
	}
	return ((void *)d);
}

/*
** char pointer d is used for void pointer conversion
** while the index is less than the byte number, keep copying c
** original memset function accepts c as an unsigned char conversion
*/
