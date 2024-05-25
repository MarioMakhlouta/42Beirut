/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakhlou <mmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:21:33 by mmakhlou          #+#    #+#             */
/*   Updated: 2024/04/20 18:28:29 by mmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_display(int length, char bchar, char mchar, char echar)
{
	int	letter_number;

	letter_number = 1;
	while (letter_number <= length)
	{
		if (letter_number == 1)
			ft_putchar(bchar);
		else if (letter_number == length)
			ft_putchar(echar);
		else
			ft_putchar(mchar);
		letter_number++;
	}
	ft_putchar('\n');
}

void	rush(int a, int b)
{
	int	line_number;

	line_number = 1;
	if (a >= 1 && b >= 1)
	{
		while (line_number <= b)
		{
			if (line_number == 1)
				ft_display(a, 'o', '-', 'o');
			else if (line_number == b)
				ft_display(a, 'o', '-', 'o');
			else
				ft_display(a, '|', ' ', '|');
			line_number++;
		}
	}
	else
		write(1, "Error", 6);
}
