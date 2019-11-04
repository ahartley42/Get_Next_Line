/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:31:01 by ahartley          #+#    #+#             */
/*   Updated: 2019/06/12 11:36:26 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	if (!s1 && !s2)
		return (0);
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (p1[i] == p2[i] && i < n - 1)
		i++;
	if (n == i)
		return (0);
	return (p1[i] - p2[i]);
}

/*
** convert both void pointers to char pointers for comparison
** iterate while the pointers are equal and n-bytes are not reached
** a complete match returns 0
** otherwise the first char difference (s1 - s2) is returned
*/
