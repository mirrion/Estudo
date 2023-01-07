/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_util.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosantan <rosantan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 16:55:17 by rosantan          #+#    #+#             */
/*   Updated: 2023/01/05 18:08:50 by rosantan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_image	new_sprite(void *mlx, char *img_path, t_game *game)
{
	t_image	img;

	img.ptr = mlx_xpm_file_to_image(mlx, img_path, &img.x, &img.y);
	if (img.ptr == NULL)
		error_msg(game, RED"ERROR: "GREY"read xpm\n"RESET);
	img.pxl = mlx_get_data_addr(img.ptr, &img.bpp, &img.l_size, &img.endian);
	return (img);
}
