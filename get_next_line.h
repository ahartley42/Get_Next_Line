/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahartley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 09:14:09 by ahartley          #+#    #+#             */
/*   Updated: 2019/07/05 15:09:30 by ahartley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 3
# include "libft/libft.h"

int					get_next_line(const int fd, char **line);

typedef struct		s_line
{
	int				f;
	char			*doc;
	struct s_line	*next;
}					t_line;

#endif
