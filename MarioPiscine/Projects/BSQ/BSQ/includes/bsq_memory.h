/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_memory.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakhlou <mmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:40:53 by mmakhlou          #+#    #+#             */
/*   Updated: 2024/05/07 18:43:39 by mmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_MEMORY_H
# define BSQ_MEMORY_H

# include "bsq_info.h"
# include "map.h"

void	ft_init(t_bsq_info *bsq_info, t_map_info *map_info);
void	ft_uninit(t_bsq_info *bsq_info);

#endif
