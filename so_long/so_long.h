/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:34:06 by rosantan          #+#    #+#             */
/*   Updated: 2023/01/05 19:24:39 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include "libft/includes/ft_printf.h"
# include "libft/includes/get_next_line.h"
# include "libft/includes/libft.h"
# include "mlx_linux/mlx.h"
# include <X11/keysym.h>
# include <X11/X.h>
# include <stdlib.h>
# include <fcntl.h>
# include <time.h>

# define KEY_ESC 65307
# define KEY_TAB 65289
# define KEY_SPACE 32
# define KEY_W 119
# define KEY_D 100
# define KEY_S 115
# define KEY_A 97
# define KEY_UP  	65362
# define KEY_LEFT  	65361
# define KEY_RIGHT 	65363
# define KEY_DOWN  	65364
# define PLAYER 	'P'
# define KEYS		'C'
# define WALL		'1'
# define FLOOR		'0'
# define MAP_EXIT	'E'
# define EXIT_OPEN	'e'
# define SPIKE		'S'

# define YELLOW 	0xF7FF00
# define BLUE		"\033[0;34m"
# define GREEN		"\033[0;32m"
# define RED 		"\033[1;31m"
# define GREY 		"\033[0;90m"
# define RESET 		"\033[0m"
# define WIN		"\033[05;32m"
# define LOSE		"\033[05;31m"

# define TITLE "GLOBINS"
# define PIXEL 32


typedef struct s_image
{
	void	*ptr;
	char	*pxl;
	char	*path;
	int		bpp;
	int		l_size;
	int		endian;
	int		x;
	int		y;
}	t_image;

typedef struct s_map
{
	char	**map_lines;
	char	*map_full;
	int		columns;
	int		number_lines;
	int		keys;
	int		player;
	int		enemys;
	int		exit;
	int		player_position;
}	t_map;

typedef struct s_game
{
	void		*mlx_ptr;
	void		*win_ptr;
	int			width;
	int			height;
	t_image		wall;
	t_image		floor;
	t_image		player;
	t_image		player_w;
	t_image		player_a;
	t_image		player_s;
	t_image		player_d;
	t_image		key;
	t_image		exit;
	t_image		spike;
	t_image		door_open;
	t_map		map;
	int			moves;
	char		*text;
	int			piponia;

}	t_game;

void	init_all(t_game *game, int argc, char **argv);
void	init_map_args(t_game *game);
void	create_paths(t_game *game);
void	verify_map_extension(int argc, char **argv, t_game *game);
void	close_game_init(char *err_msg, t_game *game);
void	init_map(char *argv, t_game *game);
void	check_map_columns(t_game *game);
void	check_map_lines(t_game *game);
void	valid_map_parameters(t_game *game);
void	init_game(t_game *game);
void	valid_game_parameters(t_game *game);
int		error_msg(t_game *game, char	*message);
void	free_string_array(char **free_me);
void	create_sprites(t_game *game);
void	draw_map(t_game *game);
void	ft_open_door(t_game *game, int keys);
int		ft_redraw(t_game *game);
void	ft_put_image(t_game *game, char type, int y, int x);
void	ft_open_door(t_game *game, int keys);
int		ft_handle_input(int keysym, t_game *game);
int		close_game(t_game *game);
void	ft_destroy_all(t_game *game);
void	ft_destroy_images(t_game *game);
int		ft_valide_move(t_game *game, char move);
void	ft_move_w(t_game *game);
void	ft_move_a(t_game *game);
void	ft_move_s(t_game *game);
void	ft_move_d(t_game *game);
void	ft_you_win(void);
void	ft_you_lose(void);
void	ft_redraw_player(t_game *game, char *path);
int		handle_no_event(void);
t_image	new_sprite(void *mlx, char *img_path, t_game *game);
void	ft_data_map(t_game *game, char *map_full);
void	ft_line_empty(t_game *game, char *map_full);
int		ft_count_lines(char	*map);

#endif
