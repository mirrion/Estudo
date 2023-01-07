/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 16:52:37 by rosantan          #+#    #+#             */
/*   Updated: 2023/01/04 16:55:59 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	create_sprites(t_game *game)
{
	game->wall = new_sprite(game->mlx_ptr, game->wall.path, game);
	game->floor = new_sprite(game->mlx_ptr, game->floor.path, game);
	game->player = new_sprite(game->mlx_ptr, game->player.path, game);
	game->key = new_sprite(game->mlx_ptr, game->key.path, game);
	game->exit = new_sprite(game->mlx_ptr, game->exit.path, game);
	game->door_open = new_sprite(game->mlx_ptr, game->door_open.path, game);
}
