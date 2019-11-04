/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 09:16:14 by ahartley          #+#    #+#             */
/*   Updated: 2019/07/04 14:06:06 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "Libft/libft.h"

static t_line	*new_store(int fd)
{
	t_line	*store;

	if (!(store = (t_line *)malloc(sizeof(*store))))
		return (NULL);
	store->f = fd;
	store->doc = ft_strnew(0);
	store->next = NULL;
	return (store);
}

static t_line	*new_node(int fd, t_line *store)
{
	t_line	*new;

	while (store)
	{
		if (store->f == fd)
			return (store);
		if (store->next)
			store = store->next;
		else
		{
			new = new_store(fd);
			store->next = new;
		}
	}
	return (NULL);
}

static int		read_out(char *doc, char **line)
{
	char	*p;

	if (!doc)
		return (0);
	p = ft_strchr(doc, '\n');
	if (p)
	{
		*p = '\0';
		*line = ft_strdup(doc);
		ft_strncpy(doc, &p[1], ft_strlen(&p[1]) + 1);
		return (1);
	}
	else if (!(ft_strlen(doc) < 1))
	{
		*line = ft_strdup(doc);
		*doc = '\0';
		return (1);
	}
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	static t_line	*store;
	int				out;
	char			buf[BUFF_SIZE + 1];
	char			*temp;

	if (fd < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	if (!store)
		store = new_store(fd);
	if (!(store = new_node(fd, store)))
		return (-1);
	temp = NULL;
	while (!(ft_strchr(store->doc, '\n')))
	{
		out = read(fd, buf, BUFF_SIZE);
		if (out < 0)
			return (-1);
		if (out == 0)
			return (read_out(temp, line));
		buf[out] = 0;
		temp = ft_strjoin(store->doc, buf);
		free(store->doc);
		store->doc = temp;
	}
	return (read_out(store->doc, line));
}
