/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:44:24 by ahartley          #+#    #+#             */
/*   Updated: 2019/06/07 16:42:39 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (p1[i] == p2[i] && p1[i])
		i++;
	if (p1[i] > p2[i])
		return (1);
	if (p1[i] < p2[i])
		return (-1);
	return (0);
}

/*
** unsigned char casting so \200 > \0 , as original function
** p2[i] not needed in while loop
** i = index of char array
** p1 - p2 at first char difference; 1 = pos, -1 = neg, 0 = equal
*/
