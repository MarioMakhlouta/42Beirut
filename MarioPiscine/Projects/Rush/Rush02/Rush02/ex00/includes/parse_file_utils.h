/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_file_utils.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-huss <sel-huss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 20:03:29 by sel-huss          #+#    #+#             */
/*   Updated: 2024/05/05 20:06:07 by sel-huss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_FILE_UTILS_H
# define PARSE_FILE_UTILS_H

void	*ft_get_line_lens_loop(int file, int *file_sizes);
int		ft_get_lines_loop(int file, int *file_sizes, char ***lines);
#endif
