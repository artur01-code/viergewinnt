/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@students.42wolfsburg.de>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 17:46:47 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/27 17:49:55 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "viergewinnt.h"

char set_token(int player)
{
    char token;

    if (player == 0)
        token = 'R';
    else
        token = 'Y';
    return (token); 
}