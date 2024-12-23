/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakhlou <mmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 11:55:59 by mmakhlou          #+#    #+#             */
/*   Updated: 2024/08/03 11:56:11 by mmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

//Here an error message is being printed out
void	ft_error(void)
{
	write (2, "Error\n", 6);
	exit(1);
}
