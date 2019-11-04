/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:31:58 by ahartley          #+#    #+#             */
/*   Updated: 2019/06/08 10:45:39 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	int		i;
	char	*ans;

	i = 0;
	ans = (char *)ft_memalloc(size + 1);
	return (ans);
}

/*
** allocates FRESH memory
** memory is returned as a string
** +1 accounts for the '\0' char
*/
