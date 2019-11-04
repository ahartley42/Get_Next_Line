/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:22:35 by ahartley          #+#    #+#             */
/*   Updated: 2019/06/08 13:06:08 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (p1[i] == p2[i] && p1[i] && i < (int)n)
		i++;
	if ((int)n <= i)
		return (0);
	if (p1[i] > p2[i])
		return (1);
	if (p1[i] < p2[i])
		return (-1);
	return (0);
}

/*
** unsigned char casting for ease and to match original function (\200 > \0)
** int casting for size_t conversion
** -1 necessary in while condition to account for '\0' char
** p1 - p2 at first char difference; 1 = pos, -1 = neg, 0 = equal
*/
