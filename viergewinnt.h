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

#endif