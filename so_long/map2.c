/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:01:29 by rosantan          #+#    #+#             */
/*   Updated: 2023/01/10 16:22:18 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_handle_sprite(t_game *game, int x, int y);

void	draw_map(t_game *game)
{
	int	x;
	int	y;

	x = 0;
	while (x <= game->map.number_lines)
	{
		y = 0;
		while (y < game->map.columns)
		{
			ft_handle_sprite(game, x, y);
			y++;
		}
		x++;
	}
}

static void	ft_handle_sprite(t_game *game, int x, int y)
{
	char	sprite_code;

	sprite_code = game->map.map_lines[x][y];
	put_image(game, sprite_code, y, x);
}

void	ft_print_image(t_game	*game, void *ptr, int y, int x)
{
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, ptr, y * 32, x * 32);
}

void	put_image(t_game *game, char type, int y, int x)
{
	if (type == WALL)
		ft_print_image(game, game->wall.ptr, y, x);
	if (type == FLOOR)
		ft_print_image(game, game->floor.ptr, y, x);
	if (type == PLAYER)
	{
		game->player.x = y;
		game->player.y = x;
		ft_print_image(game, game->player.ptr, y, x);
	}
	if (type == KEYS)
		ft_print_image(game, game->key.ptr, y, x);
	if (type == MAP_EXIT)
	{
		game->exit.x = y;
		game->exit.y = x;
		ft_print_image(game, game->exit.ptr, y, x);
	}
	if (type == EXIT_OPEN)
		ft_print_image(game, game->door_open.ptr, y, x);
}

void	open_door(t_game *game, int keys)
{
	if (keys == 0)
		game->map.map_lines[game->exit.y][game->exit.x] = EXIT_OPEN;
}
