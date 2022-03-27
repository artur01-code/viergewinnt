/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@students.42wolfsburg.de>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:09:36 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/27 18:05:46 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "viergewinnt.h"



int main(int argc, char **argv)
{
	t_list *game;
	int player;

	game = malloc(sizeof(t_list));
	player = 0;
	if (argc != 3)
		error();
	else
	{
		check_input(&game, argv);
		init_map(game);
		print_map(game);
		while (1)
		{
			ask_for_input(game, player);
			print_map(game);
			check_if_won(game, player);
			player = ((player + 1) % 2); 
		}
	}
	free(game);
}

/*
		game->map[9][0] = 'X';
		game->map[9][1] = 'X';
		game->map[9][2] = 'O';
		game->map[9][3] = 'O';
		game->map[9][4] = 'X';
		game->map[9][5] = 'X';
		game->map[8][5] = 'X';
		game->map[7][5] = 'X';
*/