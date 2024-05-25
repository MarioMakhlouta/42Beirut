/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_memory.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakhlou <mmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:42:03 by mmakhlou          #+#    #+#             */
/*   Updated: 2024/05/07 18:43:54 by mmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_info.h"
#include "map.h"
#include <stdlib.h>
#include "ft_utility.h"

void	ft_uninit(t_bsq_info *bsq_info)
{
	free(bsq_info->line);
	free(bsq_info->prev_line);
	free(bsq_info->current_line);
}

void	ft_init(t_bsq_info *bsq_info, t_map_info *map_info)
{
	int	i;

	bsq_info->prev_line = (int *)malloc(sizeof(int)
			* (map_info->fl_length + 1));
	bsq_info->current_line = (int *)malloc(sizeof(int)
			* (map_info->fl_length + 1));
	bsq_info->line = (char *)malloc(sizeof(char)
			* (ft_max(map_info->fl_length, map_info->legend_length) + 2));
	i = 0;
	while (i < map_info->fl_length)
	{
		(bsq_info->current_line)[i] = 0;
		(bsq_info->prev_line)[i++] = 0;
	}
	bsq_info->current_i = 0;
}
