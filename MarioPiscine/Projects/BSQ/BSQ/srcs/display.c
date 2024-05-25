/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakhlou <mmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:42:20 by mmakhlou          #+#    #+#             */
/*   Updated: 2024/05/07 18:43:59 by mmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "ft_utility.h"

void	display_line(int *result, t_map_info *map_info, int i, char *line)
{
	int	j;

	j = 0;
	while (line[j] != '\0')
	{
		if (i >= result[1] - result[0] + 1 && i <= result[1] && j >= result[2]
			- result[0] + 1 && j <= result[2])
			ft_putchar(map_info->plin);
		else
			ft_putchar(line[j]);
		j++;
	}
}

void	display_result(char *file_name, int *result, t_map_info *map_info)
{
	int		fd;
	char	*buf;
	int		ret;
	int		i;

	i = 0;
	buf = (char *)malloc(sizeof(char)
			* (ft_max(map_info->fl_length, map_info->legend_length) + 2));
	fd = open(file_name, O_RDONLY);
	read(fd, buf, map_info->legend_length + 1);
	ret = read(fd, buf, map_info->fl_length + 1);
	while (ret > 0)
	{
		buf[ret] = '\0';
		display_line(result, map_info, i, buf);
		i++;
		ret = read(fd, buf, map_info->fl_length + 1);
	}
	close(fd);
	free(buf);
}
