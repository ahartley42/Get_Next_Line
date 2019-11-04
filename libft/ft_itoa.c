/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:06:09 by ahartley          #+#    #+#             */
/*   Updated: 2019/06/08 17:32:42 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	make_positive(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}

static int			itoa_counter(int n, int i)
{
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char				*ft_itoa(int n)
{
	int				i;
	unsigned int	z;
	char			*ans;

	i = 0;
	z = n;
	if (n <= 0)
		i++;
	z = make_positive(n);
	i = itoa_counter(z, i);
	if (!(ans = (char *)malloc(i + 1)))
		return (NULL);
	ans[i] = '\0';
	while (z != 0)
	{
		if (z % 10 >= 0 && z % 10 <= 9)
			ans[i - 1] = (z % 10) + '0';
		z = z / 10;
		i--;
	}
	if (i == 1)
		ans[0] = '-';
	if (n == 0)
		ans[0] = '0';
	return (ans);
}

/*
** i = string size to accomodate numbers and sign
** z = positive value for n, done to retain integrity of n
** itoa conversion happens from the string end to start
*/
