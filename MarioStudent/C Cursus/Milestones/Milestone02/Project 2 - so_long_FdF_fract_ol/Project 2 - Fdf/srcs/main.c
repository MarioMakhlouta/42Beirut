/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakhlou <mmakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:31:30 by mmakhlou          #+#    #+#             */
/*   Updated: 2024/12/19 15:08:52 by mmakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fdf.h"

static	int	expose_handle(t_fdf *fdf);
static	int	close_window(t_fdf *fdf);

int	main(int argc, char **argv)
{
	char	*file_name;
	t_fdf	*fdf;

	if (argc != 2)
		error(1);
	file_name = argv[1];
	fdf = init_fdf(file_name);
	render(fdf);
	mlx_key_hook(fdf->win, &key_handle, fdf);
	mlx_hook(fdf->win, 17, 0, &close_window, fdf);
	mlx_expose_hook(fdf->win, &expose_handle, fdf);
	mlx_loop(fdf->mlx);
}

static int	expose_handle(t_fdf *fdf)
{
	render(fdf);
	return (0);
}

static	int	close_window(t_fdf *fdf)
{
	mlx_destroy_window(fdf->mlx, fdf->win);
	error(0);
	exit(0);
	return (0);
}
