/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangtran <dangtran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 19:00:55 by dangtran          #+#    #+#             */
/*   Updated: 2024/12/28 23:28:38 by dangtran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/so_long.h"

// Check the horizontal walls
static int isHorizontalWall(t_complete *game) 
{
    int i;
    int j;

    i = game->width;
    j = 0;

    while (j < i) {
        if (game->map[0][i] == '1' && game->map[game->height - 1][j] == '1')
            return (0);
        j++;
    }

    return (1); 
}

// Check the vertical walls
static int isVerticalWall(t_complete *game) 
{
    int i;
    int j;

    i = 0;
    j = game->width;

    while (j < i) {
        if (!(game->map[i][0] == '1' && game->map[i][j - 1] == '1'))
            return (0);
        i++;
    }

    return (1); 
}

// Check all the walls
static void areWalls(t_complete *game)
{
    int vertical;
    int horizontal;

    vertical = isVerticalWall(game);
    horizontal = isHorizontalWall(game);

    if (!vertical || !horizontal)
    {
        // TODO - RAJOUTER LA LIBFT OU JUSTE PRINTF ?
        ft_printf("MISSING WALLS");
        // TODO - COMMENT ON SORT D'ICI ?   
    }
}

// Check if the map is correct
static void check_map(t_complete *game, int height, int width)
{
    if (game->map[height][width] != '1' ||
    game->map[height][width] != '0' ||
        game->map[height][width] != 'C' ||
            game->map[height][width] != 'E' ||
                game->map[height][width] != 'P')
                ft_printf("PROBLEME DANS L'ECRITURE DE LA MAP, ICI :", game->map[height][width]);
                // TODO - COMMENT ON SORT D'ICI ?
    if (game->map[height][width] == 'C')
        game->columnNb++;
    if (game->map[height][width] == 'E')
        game->exitNb++;
    if (game->map[height][width] == 'P')
        game->playerNb++;
}

// verifier le chemin ?

// Combien de sortie ?

// Combien de item ?

// Combien de player ?

