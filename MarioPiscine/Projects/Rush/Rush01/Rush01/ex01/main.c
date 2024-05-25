/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 10:49:48 by moassi            #+#    #+#             */
/*   Updated: 2024/04/28 14:00:00 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
void	initialize_grid(int grid[5][5]);
void	print_grid(int grid[5][5]);
int		is_valid_input(int argc, char *argv[], int tab[20]);
int		is_correct_solution(int tab[20], int grid[5][5]);
int		solve_puzzle(int grid[5][5], int view_points[20], int row, int col);

int	main(int argc, char *argv[])
{
	int	grid[5][5];
	int	view_points[20];

	if (is_valid_input(argc, argv, view_points) == 0)
	{
		ft_putstr("Error: Bad Input\n");
		return (0);
	}
	initialize_grid(grid);
	if (solve_puzzle(grid, view_points, 0, 0))
		print_grid(grid);
	else
		ft_putstr("Error: No Solution\n");
}
