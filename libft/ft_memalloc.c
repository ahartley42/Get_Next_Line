/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 10:42:53 by ahartley          #+#    #+#             */
/*   Updated: 2019/06/08 11:39:40 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*ans;

	i = 0;
	if (!(ans = (char *)malloc(size)))
		return (NULL);
	ft_bzero(ans, size);
	return ((void *)ans);
}

/*
** creates a FRESH string, initializes everything to 0
*/
