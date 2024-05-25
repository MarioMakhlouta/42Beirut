/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falupine <falupine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 03:57:54 by falupine          #+#    #+#             */
/*   Updated: 2018/08/22 16:39:29 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_file(void)
{
	int		r;
	int		fd;
	char	buf[4096];

	fd = open("temddp", O_CREAT | O_RDWR | O_TRUNC, S_IWUSR | S_IRUSR);
	while ((r = read(0, buf, 4096)) > 0)
	{
		write(fd, buf, r);
	}
	close(fd);
}
