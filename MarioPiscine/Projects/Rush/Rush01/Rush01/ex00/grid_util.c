/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:17:15 by moassi            #+#    #+#             */
/*   Updated: 2024/04/28 13:52:54 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_correct_solution(int tab[16], int grid[4][4]);

void	print_grid(int grid[4][4])
{
	char	c;
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = grid[i][j] + '0';
			write(1, &c, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	initialize_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	no_duplicates(int grid[4][4], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num)
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	solve_puzzle(int grid[4][4], int view_points[16], int row, int col)
{
	int	num;

	if (row == 4)
		return (is_correct_solution(view_points, grid));
	if (grid[row][col] != 0 && col == 3)
		return (solve_puzzle(grid, view_points, row + 1, 0));
	else if (grid[row][col] != 0 && col != 3)
		return (solve_puzzle(grid, view_points, row, col + 1));
	num = 1;
	while (num <= 4)
	{
		if (no_duplicates(grid, row, col, num))
		{
			grid[row][col] = num;
			if ((col == 3 && solve_puzzle(grid, view_points, row + 1, 0))
				|| (col != 3 && solve_puzzle(grid, view_points, row, col + 1)))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
