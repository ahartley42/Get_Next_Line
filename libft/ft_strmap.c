/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 12:40:13 by ahartley          #+#    #+#             */
/*   Updated: 2019/06/11 10:30:32 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*ans;

	i = 0;
	if (!s || !f)
		return (NULL);
	if (!(ans = (char *)ft_memalloc(ft_strlen(s) + 1)))
		return (NULL);
	while (s[i])
	{
		ans[i] = f(s[i]);
		i++;
	}
	return (ans);
}

/*
** new string returned with function applied to it
*/
