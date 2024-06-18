/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakhlou <mmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:45:52 by mmakhlou          #+#    #+#             */
/*   Updated: 2024/06/17 12:45:59 by mmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	handle_char(va_list args)
{
	char	c;

	c = (char) va_arg(args, int);
	return (print_char(c));
}

int	print_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}
