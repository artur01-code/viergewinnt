/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@students.42wolfsburg.de>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 17:19:56 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/27 19:32:43 by jtomala          ###   ########.fr       */
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
    check_columns(game, player);
    check_stairs_right(game, player);
    check_stairs_left(game, player);
}

void won_and_exit(int player)
{
    printf("Player %d wins!\n", player + 1);
    exit(0);
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

void check_columns(t_list *game, int player)
{
    int x;
    int y;
    char token;

    x = 0;
    y = 0;
    token = set_token(player);
    while (y <= game->y - 3)
    {
        while (x <= game->x)
        {
            if (game->map[y][x] == token)
                if (game->map[y + 1][x] == token)
                    if (game->map[y + 2][x] == token)
                        if (game->map[y + 3][x] == token)
                            won_and_exit(player);
            x++;
        }
        x = 0;
        y++;
    }
}

void check_stairs_right(t_list *game, int player)
{
    int x;
    int y;
    char token;

    x = 0;
    y = 0;
    token = set_token(player);
    while (y <= ((game->y) - 4))
    {
        while (x <= ((game->x) - 4))
        {
            if (game->map[y][x] == token)
                if (game->map[y + 1][x + 1] == token)
                    if (game->map[y + 2][x + 2] == token)
                        if (game->map[y + 3][x + 3] == token)
                            won_and_exit(player);
            x++;                  
        }
        x = 0;
        y++;
    }
}

void check_stairs_left(t_list *game, int player)
{
    int x;
    int y;
    char token;

    x = game->x;
    y = 0;
    token = set_token(player);
    while (y <= game->y - 4)
    {
        while (x >= game->x - 3)
        {
            if (game->map[y][x] == token)
                if (game->map[y + 1][x - 1] == token)
                    if (game->map[y + 2][x - 2] == token)
                        if (game->map[y + 3][x - 3] == token)
                            won_and_exit(player);
            x--;                  
        }
        x = game->x;
        y++;
    }
}