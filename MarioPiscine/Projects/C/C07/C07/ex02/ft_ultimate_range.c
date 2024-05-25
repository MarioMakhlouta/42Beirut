/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakhlou <mmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:33:41 by mmakhlou          #+#    #+#             */
/*   Updated: 2024/05/01 13:39:23 by mmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		boundary;
	int		index;
	int		*buffer;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	boundary = max - min;
	buffer = malloc(boundary * sizeof(int));
	if (buffer == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	index = 0;
	while (index < boundary)
	{
		buffer[index] = min + index;
		index++;
	}
	return (boundary);
}
