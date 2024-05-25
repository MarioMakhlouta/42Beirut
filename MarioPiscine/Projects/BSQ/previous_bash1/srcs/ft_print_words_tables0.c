/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:42:26 by flcarre           #+#    #+#             */
/*   Updated: 2018/08/21 10:39:27 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_print_words_tables(char **tab, int x)
{
	int i;

	i = 0;
	while (tab[i] != 0)
	{
		write(1, tab[i], x);
		ft_putchar('\n');
		i++;
	}
}
