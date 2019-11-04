/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:35:34 by ahartley          #+#    #+#             */
/*   Updated: 2019/06/11 11:13:23 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*map;

	if (!lst || !f || !(map = f(lst)))
		return (NULL);
	if (lst->next != NULL)
		map->next = ft_lstmap(lst->next, f);
	return (map);
}

/*
** passes f to each element in the next link
*/
