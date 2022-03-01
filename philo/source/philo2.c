/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:42:34 by jporta            #+#    #+#             */
/*   Updated: 2022/03/01 18:22:28 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	sleepingandthink(t_philo	*philo)
{
	usleep(20);
	myusleep(philo->lst->timetoeat, philo);
	sleeping(philo);
	usleep(20);
	myusleep(philo->lst->timetosleep, philo);
	usleep(20);
	if (philo->lst->running == 1)
		pressftotalk(philo, 0);
}
