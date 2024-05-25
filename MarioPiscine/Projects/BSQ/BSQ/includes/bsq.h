/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakhlou <mmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:41:09 by mmakhlou          #+#    #+#             */
/*   Updated: 2024/05/07 18:43:41 by mmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include "map.h"

int		solve_bsq(char *filename, int legend_length, t_map_info *map_info,
			int **result);

#endif
