/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict_utils.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-huss <sel-huss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 20:03:21 by sel-huss          #+#    #+#             */
/*   Updated: 2024/05/05 20:06:04 by sel-huss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_DICT_UTILS_H
# define PARSE_DICT_UTILS_H

char	*get_number(int *cur, char *str, char **number);
int		get_value_size(int cur, char *str);
int		is_only_space(int cur, char *str);
#endif
