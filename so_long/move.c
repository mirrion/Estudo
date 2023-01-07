/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:12:37 by rosantan          #+#    #+#             */
/*   Updated: 2023/01/07 13:12:47 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_valide_move(t_game *game, char move)
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
		ft_you_win();
		return (close_game(game));
	}
	else if (move == MAP_EXIT && game->map.keys != 0)
		return (0);
	else
		return (1);
}

void	ft_move_w(t_game *game)
{
	if (ft_valide_move(game, \
	game->map.map_lines[game->player.y - 1][game->player.x]))
	{
		game->map.map_lines[game->player.y][game->player.x] = FLOOR;
		game->map.map_lines[game->player.y - 1][game->player.x] = PLAYER;
		game->moves++;
		ft_open_door(game, game->map.keys);
		ft_redraw_player(game, "./img/move_w.xpm");
		draw_map(game);
		ft_printf("Movement count: "GREEN"%d\n"RESET, game->moves);
	}
}

void	ft_move_a(t_game *game)
{
	if (ft_valide_move(game, \
	game->map.map_lines[game->player.y][game->player.x - 1]))
	{
		game->map.map_lines[game->player.y][game->player.x] = FLOOR;
		game->map.map_lines[game->player.y][game->player.x - 1] = PLAYER;
		game->moves++;
		ft_open_door(game, game->map.keys);
		ft_redraw_player(game, "./img/move_a.xpm");
		draw_map(game);
		ft_printf("Movement count: "GREEN"%d\n"RESET, game->moves);
	}
}

void	ft_move_s(t_game *game)
{
	if (ft_valide_move(game, \
	game->map.map_lines[game->player.y + 1][game->player.x]))
	{
		game->map.map_lines[game->player.y][game->player.x] = FLOOR;
		game->map.map_lines[game->player.y + 1][game->player.x] = PLAYER;
		game->moves++;
		ft_open_door(game, game->map.keys);
		ft_redraw_player(game, "./img/move_s.xpm");
		draw_map(game);
		ft_printf("Movement count: "GREEN"%d\n"RESET, game->moves);
	}
}

void	ft_move_d(t_game *game)
{
	if (ft_valide_move(game, \
	game->map.map_lines[game->player.y][game->player.x + 1]))
	{
		game->map.map_lines[game->player.y][game->player.x] = FLOOR;
		game->map.map_lines[game->player.y][game->player.x + 1] = PLAYER;
		game->moves++;
		ft_open_door(game, game->map.keys);
		ft_redraw_player(game, "./img/move_d.xpm");
		draw_map(game);
		ft_printf("Movement count: "GREEN"%d\n"RESET, game->moves);
	}
}
