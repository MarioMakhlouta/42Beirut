/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   row_col_checker.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:52:07 by moassi            #+#    #+#             */
/*   Updated: 2024/04/27 18:46:44 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_colup(int top, int grid[4][4], int col)
{
	int	count;
	int	max;
	int	i;

	i = 1;
	count = 1;
	max = grid[0][col];
	while (i < 4)
	{
		if (grid[i][col] > max)
		{
			count ++;
			max = grid[i][col];
		}
		i++;
	}
	if (count == top)
		return (1);
	return (0);
}

int	check_coldown(int bot, int grid[4][4], int col)
{
	int	count;
	int	max;
	int	i;

	i = 2;
	count = 1;
	max = grid[3][col];
	while (i >= 0)
	{
		if (grid[i][col] > max)
		{
			count ++;
			max = grid[i][col];
		}
		i--;
	}
	if (count == bot)
		return (1);
	return (0);
}

int	check_rowleft(int left, int grid[4][4], int row)
{
	int	count;
	int	max;
	int	i;

	i = 1;
	count = 1;
	max = grid[row][0];
	while (i < 4)
	{
		if (grid[row][i] > max)
		{
			count ++;
			max = grid[row][i];
		}
		i++;
	}
	if (count == left)
		return (1);
	return (0);
}

int	check_rowright(int right, int grid[4][4], int row)
{
	int	count;
	int	max;
	int	i;

	i = 2;
	count = 1;
	max = grid[row][3];
	while (i >= 0)
	{
		if (grid[row][i] > max)
		{
			count ++;
			max = grid[row][i];
		}
		i--;
	}
	if (count == right)
		return (1);
	return (0);
}

int	is_correct_solution(int tab[16], int grid[4][4])
{
	int	j;

	j = 0;
	while (j <= 3)
	{
		if (check_colup(tab[j], grid, j) == 0)
			return (0);
		if (check_coldown(tab[j + 4], grid, j) == 0)
			return (0);
		if (check_rowleft(tab[j + 8], grid, j) == 0)
			return (0);
		if (check_rowright(tab[j + 12], grid, j) == 0)
			return (0);
		j++;
	}
	return (1);
}
