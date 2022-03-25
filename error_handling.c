/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtomala <jtomala@students.42wolfsburg.de>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:10:19 by jtomala           #+#    #+#             */
/*   Updated: 2022/03/25 20:49:39 by jtomala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "viergewinnt.h"

void error(void)
{
	printf("Error:\nWrong input.\n");
	exit(1);
}

void check_input(t_list **game, char **argv)
{	
	(*game)->x = ft_atoi(argv[2]);
	(*game)->y = ft_atoi(argv[1]);
	printf("____________________________________\n\n");
	printf("     Initialization of size:\n     y: %d  x: %d\n", (*game)->y, (*game)->x);
	printf("____________________________________\n\n");
	if ((*game)->x < 4 || (*game)->y < 4 || (*game)->x > 20 || (*game)->y > 20)
	{
		printf("Failed:\nSize have to be between 4 and 21\n");
		exit(1);
	}
}
