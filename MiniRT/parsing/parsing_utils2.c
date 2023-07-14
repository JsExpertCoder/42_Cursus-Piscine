/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brisly <brisly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:35:52 by brisly            #+#    #+#             */
/*   Updated: 2023/07/14 12:19:47 by brisly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/minirt.h"

float   parse_ratio(char *str, float ratio)
{
    if (!is_float(str))
        return (0.0);
    ratio = s_to_f(str);
    if (ratio >= 0 && ratio <= 1)
        return (ratio);
    else
    {
        print_error("wrong ratio");
        return (0);
    }
}

t_color parse_color(char *line, t_color colors)
{
    char    **color;
    int     i;

    i = 0;
    color = ft_split(line, ',');
    if (!color)
        print_error("malloc in parse_color failed !");
    if (count_elements(color) != 3)
        print_error("element needs 3 colors (r,g,b)");
    while (color[i])
    {
        if (i == 0 && is_color(color[i]) >= 0)
            colors.r = is_color(color[i]);
        else if (i == 1 && is_color(color[i]) >= 0)
            colors.g = is_color(color[i]);
        else if (i == 2 && is_color(color[i]) >= 0)
            colors.b = is_color(color[i]);
        else
            print_error("somethin in colors failed");
        i++;
    }
    free_tab(color);
    return (colors);
}