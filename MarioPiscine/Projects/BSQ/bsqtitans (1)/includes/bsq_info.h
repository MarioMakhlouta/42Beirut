/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_info.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkssayra <fkssayra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 20:05:13 by gpop              #+#    #+#             */
/*   Updated: 2024/05/06 18:32:37 by fkssayra         ###   ########.fr       */
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
