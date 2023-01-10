/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:42:26 by rosantan          #+#    #+#             */
/*   Updated: 2023/01/10 16:23:02 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_string_array(char **free_me)
{
	char	**free_me_too;

	free_me_too = free_me;
	while (free_me && *free_me)
		free(*free_me++);
	free(free_me_too);
}

void	destroy_all(t_game *game)
{
	destroy_images(game);
	free_string_array(game->map.map_lines);
	mlx_destroy_display(game->mlx_ptr);
	free(game->mlx_ptr);
	free(game);
}

void	destroy_images(t_game *game)
{
	mlx_destroy_image(game->mlx_ptr, game->wall.ptr);
	mlx_destroy_image(game->mlx_ptr, game->floor.ptr);
	mlx_destroy_image(game->mlx_ptr, game->player.ptr);
	mlx_destroy_image(game->mlx_ptr, game->key.ptr);
	mlx_destroy_image(game->mlx_ptr, game->exit.ptr);
	mlx_destroy_image(game->mlx_ptr, game->door_open.ptr);
}
