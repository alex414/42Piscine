/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 11:30:38 by adiaz-do          #+#    #+#             */
/*   Updated: 2019/11/20 10:01:22 by adiaz-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int x;
	int y;
	int z;

	x = 0;
	y = size - 1;
	while (x < (size / 2))
	{
		z = tab[x];
		tab[x] = tab[y];
		tab[y] = z;
		x++;
		y--;
	}
}