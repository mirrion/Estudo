/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:11:01 by rosantan          #+#    #+#             */
/*   Updated: 2023/01/10 16:23:31 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	handle_input(int keysym, t_game *game)
{
	if (keysym == KEY_ESC)
		close_game(game);
	if (keysym == KEY_W || keysym == KEY_UP)
		move_w(game);
	if (keysym == KEY_A || keysym == KEY_LEFT)
		move_a(game);
	if (keysym == KEY_S || keysym == KEY_DOWN)
		move_s(game);
	if (keysym == KEY_D || keysym == KEY_RIGHT)
		move_d(game);
	return (0);
}

int	close_game(t_game *game)
{
	mlx_destroy_window(game->mlx_ptr, game->win_ptr);
	destroy_all(game);
	exit(0);
}

void	redraw_player(t_game *game, char *path)
{
	mlx_destroy_image(game->mlx_ptr, game->player.ptr);
	game->player.path = path;
	game->player = new_sprite(game->mlx_ptr, game->player.path, game);
}
