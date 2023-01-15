/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   points.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfabbian <lfabbian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:45:43 by lfabbian          #+#    #+#             */
/*   Updated: 2023/01/15 17:35:11 by lfabbian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	three_dim_point(t_env *env)
{
	int	i;

	i = 0;
	env->initial_points = malloc(env->map_h * env->map_w * (sizeof(t_ipoint)));
	if (!env->initial_points)
		error("Malloc failed");
	env->y = 0;
	while (env->y < env->map_h)
	{
		env->x = 0;
		while (env->x < env->map_w)
		{
			env->initial_points[i] = (t_ipoint){env->x, env->y, env->final_tab[env->y][env->x]};
			//ft_printf("X: %d Y: %d Z: %d\n", env->initial_points[i].x, env->initial_points[i].y, env->initial_points[i].z);
			i++;
			env->x++;
		}
		//ft_printf("NEXT LINE\n");
		env->y++;
	}
}

void	two_dim_point(t_env *env)
{
	int	i;

	i = 0;
	env->final_points = malloc(env->map_h * env->map_w * (sizeof(t_fpoint)));
	if (!env->final_points)
		error("Malloc failed");
	while (i < (env->map_w * env->map_h))
	{
		env->final_points[i].x =  env->initial_points[i].x + \
				cosf(env->alpha) * env->initial_points[i].z - \
				cosf(env->alpha) *env->initial_points[i].y;
		env->final_points[i].y =  env->initial_points[i].y * -1 * \
				sinf(env->alpha) - env->initial_points[i].z * \
				sinf(env->alpha);
		env->final_points[i].x *= env->scale;
		env->final_points[i].y *= env->scale;
		printf("X0: %f Y0: %f\n",env->final_points[i+1].x, env->final_points[i+1].y);
		//printf("X1: %f Y1: %f\n",env->final_points[env->i].x, env->final_points[env->i].y);
		//limits(env);
		//put_pixel(env, env->final_points[env->i].x + (WINDOW_WIDTH/2), env->final_points[env->i].y + WINDOW_HEIGHT/2, RED);
		i++;
	}
}
