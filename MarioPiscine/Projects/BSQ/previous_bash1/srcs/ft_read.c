/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falupine <falupine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 15:21:37 by falupine          #+#    #+#             */
/*   Updated: 2018/08/22 19:06:40 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		size_x(char *argv)
{
	int		i;
	int		o;
	int		fd;
	char	buf[1];

	i = 0;
	o = 0;
	fd = open(argv, O_RDONLY);
	while (o != 2)
	{
		if (read(fd, buf, 1) <= 0)
			return (0);
		if (buf[0] == '\n')
			o++;
		if (o == 1)
		{
			i++;
		}
	}
	close(fd);
	return (i - 1);
}

char	**ft_read(int y, char *argv, int p_size)
{
	t_read	bsq;

	if (y == 0)
		return (0);
	bsq.x = size_x(argv);
	bsq.size = 0;
	bsq.j = 0;
	bsq.i = 0;
	((bsq.buf = malloc(y * sizeof(char*) + 1)) == NULL) ? exit(0) : 0;
	bsq.fd = open(argv, O_RDONLY);
	read(bsq.fd, bsq.buf, p_size);
	bsq.buf[0] = malloc(bsq.x * sizeof(char));
	while (read(bsq.fd, bsq.buf[bsq.i], bsq.x) > 0)
	{
		bsq.i++;
		read(bsq.fd, bsq.b, 1);
		if (bsq.b[0] != '\n' || bsq.i > y)
			return (0);
		bsq.buf[bsq.i] = malloc(bsq.x * sizeof(char));
	}
	if (bsq.i != y)
		return (0);
	bsq.buf[bsq.i] = 0;
	close(bsq.fd);
	return (bsq.buf);
}
