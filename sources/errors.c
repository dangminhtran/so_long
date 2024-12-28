/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangtran <dangtran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 19:00:55 by dangtran          #+#    #+#             */
/*   Updated: 2024/12/28 22:44:26 by dangtran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/so_long.h"

// Check the horizontal walls
static int  isHorizontalWall (t_complete *game) 
{
    int i;
    int j;

    i = game->width;
    j = 0;

    while (j < i) {
        if (game->map[0][i] == 1 && game->map[game->height - 1][j] == 1)
            return (0);
        j++;
    }

    return (1); 
}

// Check the vertical walls
static int  isVerticalWall (t_complete *game) 
{
    int i;
    int j;

    i = 0;
    j = game->width;

    while (j < i) {
        if (!(game->map[i][0] == 1 && game->map[i][j - 1] == 1))
            return (0);
        i++;
    }

    return (1); 
}

// Check all the walls ?


// verifier le chemin ?

// Combien de sortie ?

// Combien de item ?

// Combien de player ?

