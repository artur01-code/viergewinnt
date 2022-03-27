#ifndef VIERGEWINNT
# define VIERGEWINNT

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list{
	int	x;
	int y;
	char map[20][20];
}				t_list;

void error(void);
int	ft_atoi(const char *str);
void check_input(t_list **game, char **argv);
void init_map(t_list *game);
void print_map(t_list *game);
void ask_for_input(t_list *game, int player);
char set_token(int player);
void insert_in_column(t_list *game, int player, int x);
void check_if_won(t_list *game, int player);
void won_and_exit(int player);
void check_rows(t_list *game, int player);
void check_columns(t_list *game, int player);
void check_stairs_right(t_list *game, int player);
void check_stairs_left(t_list *game, int player);





#endif