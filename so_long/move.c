/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:12:37 by rosantan          #+#    #+#             */
/*   Updated: 2023/01/10 19:12:31 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	valide_move(t_game *game, char move)
{
	if (move == WALL)
		return (0);
	else if (move == KEYS)
	{
		game->map.keys = game->map.keys - 1;
		return (1);
	}
	else if (move == EXIT_OPEN)
	{
		game->moves++;
		ft_printf("Movement count: "GREEN"%d\n"RESET, game->moves);
		you_win();
		return (close_game(game));
	}
	else if (move == MAP_EXIT && game->map.keys != 0)
		return (0);
	else
		return (1);
}

void	move_w(t_game *game)
{
	if (valide_move(game, \
	game->map.map_lines[game->player.y - 1][game->player.x]))
	{
		game->map.map_lines[game->player.y][game->player.x] = FLOOR;
		game->map.map_lines[game->player.y - 1][game->player.x] = PLAYER;
		game->moves++;
		open_door(game, game->map.keys);
		redraw_player(game, "./img/move_w.xpm");
		draw_map(game);
		ft_printf("Movement count: "GREEN"%d\n"RESET, game->moves);
	}
}

void	move_a(t_game *game)
{
	if (valide_move(game, \
	game->map.map_lines[game->player.y][game->player.x - 1]))
	{
		game->map.map_lines[game->player.y][game->player.x] = FLOOR;
		game->map.map_lines[game->player.y][game->player.x - 1] = PLAYER;
		game->moves++;
		open_door(game, game->map.keys);
		redraw_player(game, "./img/move_a.xpm");
		draw_map(game);
		ft_printf("Movement count: "GREEN"%d\n"RESET, game->moves);
	}
}

void	move_s(t_game *game)
{
	if (valide_move(game, \
	game->map.map_lines[game->player.y + 1][game->player.x]))
	{
		game->map.map_lines[game->player.y][game->player.x] = FLOOR;
		game->map.map_lines[game->player.y + 1][game->player.x] = PLAYER;
		game->moves++;
		open_door(game, game->map.keys);
		redraw_player(game, "./img/move_s.xpm");
		draw_map(game);
		ft_printf("Movement count: "GREEN"%d\n"RESET, game->moves);
	}
}

void	move_d(t_game *game)
{
	if (valide_move(game, \
	game->map.map_lines[game->player.y][game->player.x + 1]))
	{
		game->map.map_lines[game->player.y][game->player.x] = FLOOR;
		game->map.map_lines[game->player.y][game->player.x + 1] = PLAYER;
		game->moves++;
		open_door(game, game->map.keys);
		redraw_player(game, "./img/move_d.xpm");
		draw_map(game);
		ft_printf("Movement count: "GREEN"%d\n"RESET, game->moves);
	}
}
