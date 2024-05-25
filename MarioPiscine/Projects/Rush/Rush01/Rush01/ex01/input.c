/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 13:21:30 by moassi            #+#    #+#             */
/*   Updated: 2024/04/28 13:46:30 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str);

int	is_valid_input(int argc, char *argv[], int tab[20])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc != 2)
		return (0);
	if (ft_strlen(argv[1]) != 39)
		return (0);
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] != ' ')
		{
			if (argv[1][i] < '1' || argv[1][i] > '5')
				return (0);
			else
				tab[j++] = argv[1][i] - '0';
		}
		i++;
	}
	if (j < 20)
		return (0);
	return (1);
}
