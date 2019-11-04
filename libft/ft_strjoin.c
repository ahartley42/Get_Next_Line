/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 16:08:35 by ahartley          #+#    #+#             */
/*   Updated: 2019/07/02 10:34:40 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ans;

	if (!s1 || !s2)
		return (NULL);
	if (!(ans = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	ans = ft_strcpy(ans, s1);
	ans = ft_strcat(ans, s2);
	return (ans);
}

/*
**int main()
**{
**	char const *s1 = "";
**	char const *s2 = "";
**
**	printf("s1 is: %s\ns2 is: %s\ns3 is: %s", s1, s2, ft_strjoin(s1,s2));
**	return 0;
**}
**
** malloc creates space for ans
** s1 is copied onto ans
** s2 is concatenated with ans (which holds s1)
*/
