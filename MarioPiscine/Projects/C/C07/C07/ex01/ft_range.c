/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakhlou <mmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:26:09 by mmakhlou          #+#    #+#             */
/*   Updated: 2024/05/01 13:32:33 by mmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		range;
	int		index;
	int		*buffer;
	int		*memory;

	if (min >= max)
	{
		return (0);
	}
	range = max - min;
	buffer = malloc(range * sizeof(int));
	memory = buffer;
	if (memory == NULL)
	{
		return (0);
	}
	index = 0;
	while (index < range)
	{
		buffer[index] = min + index;
		index++;
	}
	return (buffer);
}
