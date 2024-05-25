/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakhlou <mmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:06:25 by mmakhlou          #+#    #+#             */
/*   Updated: 2024/04/29 16:02:59 by mmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	skip_white_spaces_and_sign(char *str, int *ptr_i)
{
	int	sign_multiplier;
	int	index;

	index = 0;
	sign_multiplier = 1;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == 32)
	{
		index++;
	}
	while (str[index] && (str[index] == '+' || str[index] == '-'))
	{
		if (str[index] == '-')
		{
			sign_multiplier *= -1;
		}
		index++;
	}
	*ptr_i = index;
	return (sign_multiplier);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	index;

	result = 0;
	sign = skip_white_spaces_and_sign(str, &index);
	while (str[index] && str[index] >= '0' && str[index] <= '9')
	{
		result *= 10;
		result += str[index] - '0';
		index++;
	}
	result *= sign;
	return (result);
}
