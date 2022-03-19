#include "viergewinnt.h"

void print_map(t_list *game)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (y < game->y)
	{
		while (x < game->x)
		{
			printf("| %c ", game->map[y][x]);
			x++;
		}
		printf("\n");
		x = 0;
		y++;
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

int main(int argc, char **argv)
{
	t_list *game;

	if (argc != 3)
		error();
	else
	{
		check_input(&game, argv);
		init_map(game);
		print_map(game);

	}
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