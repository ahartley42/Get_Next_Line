/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:01:26 by ahartley          #+#    #+#             */
/*   Updated: 2019/06/11 11:00:22 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ans;
	size_t	j;

	if (!s)
		return (NULL);
	i = ft_strlen(s) - start + 1;
	j = 0;
	ans = NULL;
	if (len < i)
	{
		if (!(ans = (char *)malloc(len + 1)))
			return (NULL);
		while (j < len)
		{
			ans[j] = s[start + j];
			j++;
		}
		ans[j] = '\0';
	}
	return (ans);
}

/*
** i = size of s from "start"
** j = index of ans
** start + j = index of s (starting from "start")
** len = size of ans (malloc)
** NULL is returned if 'i' > allocated memory
*/
