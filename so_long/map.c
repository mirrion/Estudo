/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:06:57 by rosantan          #+#    #+#             */
/*   Updated: 2023/01/05 18:11:53 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	verify_map_extension(int argc, char **argv, t_game *game)
{
	int	map_len;

	if (argc > 2 || argc < 2)
		close_game_init("Error\n"GREY"invalid argument\n"RESET, game);
	map_len = ft_strlen(argv[1]);
	if ((ft_strncmp(argv[1], ".ber", 4)) == 0)
		close_game_init(RED"Error\n"GREY"only the extension is not valid\n"\
			RESET, game);
	if (!ft_strnstr(&argv[1][map_len - 4], ".ber", 4))
		close_game_init(RED"Error\n"GREY"invalid extension \n"RESET, game);
}

void	close_game_init(char *err_msg, t_game *game)
{
	free(game);
	ft_printf(err_msg);
	exit(EXIT_FAILURE);
}

void	init_map(char *argv, t_game *game)
{
	char	*map_full;
	char	*map_line;
	char	*temp;
	int		map_fd;

	map_fd = open(argv, O_RDONLY);
	if (map_fd == -1)
		close_game_init(RED"Error\n"GREY"invalid map name \n"RESET, game);
	map_full = ft_strdup("");
	map_line = get_next_line(map_fd);
	while (map_line)
	{
		if (map_line == 0)
			break ;
		temp = map_full;
		map_full = ft_strjoin(temp, map_line);
		free(temp);
		free(map_line);
		map_line = get_next_line(map_fd);
	}
	free(map_line);
	close(map_fd);
	ft_data_map(game, map_full);
	free(map_full);
}

void	valid_map_parameters(t_game *game)
{
	int	x;
	int	y;

	x = 0;
	while (x <= game->map.number_lines)
	{
		y = 0;
		while (y < game->map.columns)
		{
			if (game->map.map_lines[x][y] == WALL
			|| game->map.map_lines[x][y] == FLOOR
			|| game->map.map_lines[x][y] == PLAYER
			|| game->map.map_lines[x][y] == KEYS
			|| game->map.map_lines[x][y] == MAP_EXIT)
				y++;
			else
			{
				error_msg(game, RED"Error\n"GREY"Invalid character in map\n"\
				RESET);
				break ;
			}
		}
		x++;
	}
}

int	ft_redraw(t_game *game)
{
	draw_map(game);
	return (0);
}

void	ft_data_map(t_game *game, char *map_full)
{
	ft_line_empty(game, map_full);
	game->map.number_lines = ft_count_lines(map_full);
	game->map.map_lines = ft_split(map_full, '\n');
	game->map.columns = ft_strlen(game->map.map_lines[0]);
	game->width = game->map.columns * PIXEL;
	game->height = (game->map.number_lines + 1) * PIXEL;
}
