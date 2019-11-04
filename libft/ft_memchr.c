/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:06:00 by ahartley          #+#    #+#             */
/*   Updated: 2019/06/07 10:39:17 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*ans;

	i = 0;
	ans = (char *)s;
	while (n > 0)
	{
		if ((unsigned char)ans[i] == (unsigned char)c)
			return ((void *)&ans[i]);
		i++;
		n--;
	}
	return (NULL);
}

/*
** i = index of char array "ans"
** unsigned char conversion done as original function
** iterate and find a match with c inside array
** no match returns NULL, a match returns pointer to c in array
*/
