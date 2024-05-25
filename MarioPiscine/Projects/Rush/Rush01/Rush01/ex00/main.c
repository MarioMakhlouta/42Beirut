/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 10:49:48 by moassi            #+#    #+#             */
/*   Updated: 2024/04/28 13:53:28 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
void	initialize_grid(int grid[4][4]);
void	print_grid(int grid[4][4]);
int		is_valid_input(int argc, char *argv[], int tab[16]);
int		is_correct_solution(int tab[16], int grid[4][4]);
int		solve_puzzle(int grid[4][4], int view_points[16], int row, int col);

int	main(int argc, char *argv[])
{
	int	grid[4][4];
	int	view_points[16];

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
