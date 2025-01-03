/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangtran <dangtran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 19:24:44 by dangtran          #+#    #+#             */
/*   Updated: 2024/12/28 22:08:57 by dangtran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx_linux/mlx.h"
#include <stdio.h>


typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

int	main(void)
{
    t_data	img;
	void	*mlx;
	void	*mlx_win;
	char	*relative_path = "happy.xpm";
	int		img_width;
	int		img_height;
	
	mlx = mlx_init();
    mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
	img.img = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
    img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
	 							&img.endian);
	mlx_loop(mlx);

    return (0);
}

/* Pour compiler 
cc test.c -L./mlx_linux -lmlx -lm -I./mlx_linux -lXext -lX11
*/