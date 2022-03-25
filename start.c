/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@students.42wolfsburg.de>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:09:23 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/25 20:54:02 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "viergewinnt.h"

void print_map(t_list *game)
{
	int x;
	int y;

	x = 0;
	y = game->y;
	while (y >= 0)
	{
		while (x < game->x)
		{
			printf("| %c ", game->map[y][x]);
			x++;
		}
		printf("\n");
		x = 0;
		y--;
	}
	x = 0;
	while (x < game->x)
	{
		printf("  _ ");
		x++;
	}
	printf("\n");
	x = 0;
	while (x < game->x)
		printf("  %d ", x++);
	printf("\n");
}

void init_map(t_list *game)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (y <= game->y)
	{
		while (x <= game->x)
		{
			game->map[y][x] = '_';
			x++;
		}
		x = 0;
		y++;
	}
}
