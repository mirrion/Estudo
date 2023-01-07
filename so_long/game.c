/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:32:49 by rosantan          #+#    #+#             */
/*   Updated: 2023/01/04 17:48:37 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
void	valid_game_parameters(t_game *game)
{
	if (game->map.player < 1)
		error_msg(game, RED"Error\n"GREY"player not found\n"RESET);
	if (game->map.player > 1)
		error_msg(game, RED"Error\n"GREY"more than one player\n"RESET);
	if (game->map.keys < 1)
		error_msg(game, RED"Error\n"GREY"game without collectibles\n"RESET);
	if (game->map.exit < 1)
		error_msg(game, RED"Error\n"GREY"game without exit\n"RESET);
	if (game->map.exit > 1)
		error_msg(game, RED"Error\n"GREY"more than one exit\n"RESET);
}

void	init_game(t_game *game)
{
	int	x;
	int	y;

	x = 0;
	while (x < game->map.number_lines + 1)
	{
		y = 0;
		while (y < game->map.columns)
		{
			if (game->map.map_lines[x][y] == PLAYER)
				game->map.player++;
			if (game->map.map_lines[x][y] == KEYS)
				game->map.keys++;
			if (game->map.map_lines[x][y] == MAP_EXIT)
				game->map.exit++;
			y++;
		}
		x++;
	}
	valid_game_parameters(game);
}

int	handle_no_event(void)
{
	return (0);
}
