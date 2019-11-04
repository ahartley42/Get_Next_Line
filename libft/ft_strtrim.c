/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 16:23:50 by ahartley          #+#    #+#             */
/*   Updated: 2019/06/11 10:45:46 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		end;
	int		size;
	int		c;
	char	*ans;

	i = 0;
	c = 0;
	if (!s)
		return (NULL);
	end = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while ((s[end] == ' ' || s[end] == '\n' || s[end] == '\t') && end > i)
		end--;
	size = end - i + 1;
	if (!(ans = (char *)malloc(size + 1)))
		return (NULL);
	ans[size] = '\0';
	while (c < size)
	{
		ans[c] = s[i + c];
		c++;
	}
	return (ans);
}

/*
** i = string start index
** end = string end index
** size = trimmed string size + '\0'
** c = index of ans
*/
