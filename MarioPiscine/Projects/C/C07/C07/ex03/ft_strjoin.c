/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakhlou <mmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:40:31 by mmakhlou          #+#    #+#             */
/*   Updated: 2024/05/01 13:59:57 by mmakhlou         ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_calculate_final_length(char **strings, int size, int sep_length)
{
	int	final_length;
	int	index;

	final_length = 0;
	index = 0;
	while (index < size)
	{
		final_length += ft_string_length(strings[index]);
		final_length += sep_length;
		index++;
	}
	final_length -= sep_length;
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length;
	int		index;
	char	*string;
	char	*memory;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	length = ft_calculate_final_length(strs, size, ft_string_length(sep));
	string = (char *)malloc((length + 1) * sizeof(char));
	memory = string;
	if (string == NULL)
		return (0);
	index = 0;
	while (index < size)
	{
		ft_strcpy(memory, strs[index]);
		memory += ft_string_length(strs[index]);
		if (index < size -1)
		{
			ft_strcpy(memory, sep);
			memory += ft_string_length(sep);
		}
		index++;
	}
	return (string);
}
