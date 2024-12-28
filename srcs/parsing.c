/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangtran <dangtran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 17:06:55 by dangtran          #+#    #+#             */
/*   Updated: 2024/12/28 17:21:29 by dangtran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// GNL + Tableau d'entiers

#include <fcntl.h>
#include <stdio.h>
#include "../gnl/get_next_line.h"

int    main(void)
{
    int        fd;
    char    *line;

    fd = open("../map_test.ber", O_RDONLY);
    if (fd < 0)
    {
    //    perror("Error opening file");
        return (1);
    }
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }
    close(fd);
    return (0);
}