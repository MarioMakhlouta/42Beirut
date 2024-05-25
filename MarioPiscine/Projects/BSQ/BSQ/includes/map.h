/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakhlou <mmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:41:48 by mmakhlou          #+#    #+#             */
/*   Updated: 2024/05/07 18:43:49 by mmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

typedef struct s_map_info
{
	int		fl_length;
	int		legend_length;
	int		nr_linii;
	char	vid;
	char	obstacol;
	char	plin;
}				t_map_info;

#endif
