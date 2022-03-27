/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@students.42wolfsburg.de>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 17:19:56 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/27 18:04:48 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "viergewinnt.h"

/*
    checks the rows
    checks the stairs, if 0 checks right, if 1 checks left
*/
void check_if_won(t_list *game, int player)
{
    check_rows(game, player);
}

void won_and_exit(int player)
{
    printf("Player %d wins!\n", player + 1);
    exit(0);
}

int left_or_right(t_list *game, int direction)
{
    if (direction == 0)
        return (0);
    else
        return (game->x);
}

void check_rows(t_list *game, int player)
{
    int x;
    int y;
    int token_counter;
    char token;

    x = 0;
    y = 0;
    token_counter = 0;
    token = set_token(player);
    while (game->map[y][x])
    {
        while (game->map[y][x])
        {
            if (game->map[y][x] == token)
                token_counter++;
            else
                token_counter = 0;
            if (token_counter == 4)
                won_and_exit(player);
            x++;
        }
        token_counter = 0;
        x = 0;
        y++;
    }
}