/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfabbian <lfabbian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 13:32:59 by lfabbian          #+#    #+#             */
/*   Updated: 2023/04/13 15:19:15 by lfabbian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	*routine(void *arg)
{
	// t_data *dt;
	t_philo	*p;
	// int i = 0;

	p = (t_philo *) arg; //c'est ici que j'accederai a toutes mes variables	// i = 0;
	printf("ID: %d\n", p->id);
	// dt = (t_data *) arg;
	// while (i < p->data->nbr_philo)
	// {
	// 	printf("FORKS: %d\n", p->data->forks[p->id]);
	// 	i++;
	// }
	// }
	// while (i < 10)
	// {
	// printf("ICI\n");
	// printf("PHILO ID: %d && FORK: %d\n", p->id, p->data->forks[p->id]);

		// i++;
	// }
	// pthread_mutex_destroy()
	//if right & left fork are available
		//yes: then eat
			//when done: replace the forks
	//if not: then continue as long as your time < time to die
		// sleep
		// think
	//repeat

	//we always need to check that the current time < time_to_die otherwise the similuation ends !
	// printf("Thread created :-)\n");
	return 0;
}
