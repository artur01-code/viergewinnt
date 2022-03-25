/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@students.42wolfsburg.de>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 21:04:51 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/25 21:05:04 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "viergewinnt.h"

void insert_in_column(t_list *game, int player, int x)
{
	int y;
	char token;

	y = game->y;
	if (game->map[y][x] == 'R' || game->map[y][x] == 'Y')
	{
		printf("Column is full\n");
		ask_for_input(game, player);
	}
	if (player == 0)
		token = 'R';
	else
		token = 'Y';
	while (y > 0)
	{
		if (game->map[y- 1][x] == 'R' || game->map[y - 1][x] == 'Y')
		{	
			game->map[y][x] = token;	
			return ;
		}
		y--;
	}
	game->map[y][x] = token;
}

void ask_for_input(t_list *game, int player)
{
	int x;

	printf("Player %d: in which column should I place the token?\n", player + 1);
	scanf("%d", &x);
	if (x > 0 && x > (game->x - 1))
	{
		printf("%d is not on the map\n", x);
		ask_for_input(game, player);
	}
	insert_in_column(game, player, x);
}
