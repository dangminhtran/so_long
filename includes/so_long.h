/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangtran <dangtran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 20:44:05 by dangtran          #+#    #+#             */
/*   Updated: 2024/12/28 22:06:35 by dangtran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
#define SO_LONG_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <string.h>
# include "../gnl/get_next_line.h"
# include "../mlx_linux/mlx.h"

typedef struct t_start
{
    int        fd;
    int        height;
    int        width;
    int        playerNb;
    int        columnNb;
    int        exitNb;
    int        x_axis;
    int        y_axis;
    int        counter;
    int        collectables;

    char    **map;

    void    *floor;
    void    *wall;
    void    *player;
    void    *exit;
    void    *collectable;
    void    *mlxpointer;
    void    *winpointer;

}    t_complete;


#endif