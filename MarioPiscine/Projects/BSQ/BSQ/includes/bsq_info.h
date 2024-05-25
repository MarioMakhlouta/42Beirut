/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_info.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakhlou <mmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:41:00 by mmakhlou          #+#    #+#             */
/*   Updated: 2024/05/07 18:43:36 by mmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_INFO_H
# define BSQ_INFO_H

typedef struct s_bsq_info
{
	char	*line;
	int		*prev_line;
	int		*current_line;
	int		current_i;
	int		current_j;
}				t_bsq_info;

#endif
