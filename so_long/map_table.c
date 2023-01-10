/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_table.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:18:11 by rosantan          #+#    #+#             */
/*   Updated: 2023/01/10 16:24:18 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	count_lines(char	*map)
{
	int	cnt1;
	int	cnt2;

	cnt1 = 0;
	cnt2 = 0;
	while (map[cnt1] != '\0')
	{
		if (map[cnt1] == '\n')
			cnt2++;
		cnt1++;
	}
	return (cnt2);
}

void	check_map_columns(t_game *game)
{
	int	i;

	i = 0;
	while (i < game->map.columns)
	{
		if ((game->map.map_lines[0][i] != WALL)
		|| (game->map.map_lines[game->map.number_lines][i] != WALL))
		{
			error_msg(game, RED"Error\n"GREY"missing horizontal wall\n"\
			RESET);
			break ;
		}
		i++;
	}
}

void	check_map_lines(t_game *game)
{
	int	i;

	i = 0;
	while (i < game->map.number_lines)
	{
		if ((int) ft_strlen(game->map.map_lines[i]) != game->map.columns)
			error_msg(game, RED"Error\n"GREY"map is not rectangular\n"\
			RESET);
		if ((game->map.map_lines[i][0] != WALL)
		|| (game->map.map_lines[i][game->map.columns - 1] != WALL))
		{
			error_msg(game, RED"Error\n"GREY"vertical wall is missing\n"\
			RESET);
			break ;
		}
		i++;
	}
	if (((ft_strlen(game->map.map_lines[game->map.number_lines]) \
		> game->map.columns)))
		error_msg(game, RED"Error\n"GREY"map is not rectangular\n"\
			RESET);
	check_map_columns(game);
}
