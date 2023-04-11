/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfabbian <lfabbian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 17:37:44 by lfabbian          #+#    #+#             */
/*   Updated: 2023/04/11 14:58:17 by lfabbian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	philo_init(int argc, char **argv, t_data *philo)
{
	philo->nbr_philo = ft_atoi(argv[1]);
	philo->time_to_die = ft_atoi(argv[2]);
	philo->time_to_eat = ft_atoi(argv[3]);
	philo->time_to_sleep = ft_atoi(argv[4]);
	if (argc == 6)
		philo->eat_max = ft_atoi(argv[5]);
	philo->not_dead = 1;
	thread_init(philo);
}

void	thread_init(t_data *philo)
{
	int i;

	i = 0;
	while (i < philo->nbr_philo)
	{
		if (pthread_create(&philo->threads, NULL, routine, NULL) != 0)
		{
			printf("Failed to create thread\n");
			return ;
		}
		pthread_join(philo->threads, NULL);
		i++;
	}
}
