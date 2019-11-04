/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 08:44:20 by ahartley          #+#    #+#             */
/*   Updated: 2019/06/07 15:18:33 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;

	i = (int)ft_strlen((const char *)s1);
	j = 0;
	while (s2[j] && j < (int)n)
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}

/*
** int casting used for size_t conversion
** i = index of s1's null terminator
** j = index of s2
** i + j = index of s1 while iterating through s2
*/
