/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter_utils.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-huss <sel-huss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 20:03:08 by sel-huss          #+#    #+#             */
/*   Updated: 2024/05/05 20:06:32 by sel-huss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_UTILS_H
# define CONVERTER_UTILS_H

char	*ft_get_value(char *key, char **numbers, char **values);
char	*ft_get_magnitude(char *str);
char	*ft_get_magnitude_number(char *str);
int		only_zero(char *str);
#endif
