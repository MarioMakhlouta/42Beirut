/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakhlou <mmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:07:05 by mmakhlou          #+#    #+#             */
/*   Updated: 2024/05/01 13:25:01 by mmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_string_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		index++;
	}
	return (index);
}

char	*ft_strdup(char *src)
{
	int			index;
	char		*dest;
	char		*memory;
	size_t		length;
	size_t		total_size;

	index = 0;
	length = ft_string_length(src);
	total_size = length * sizeof(char) + 1;
	memory = ((dest = (char *)malloc(total_size)));
	if (memory == NULL)
	{
		return (0);
	}
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
