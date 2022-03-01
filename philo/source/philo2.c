/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:42:34 by jporta            #+#    #+#             */
/*   Updated: 2022/03/01 20:40:12 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	sleepingandthink(t_philo	*philo)
{
	myusleep(philo->lst->timetoeat, philo);
	sleeping(philo);
	myusleep(philo->lst->timetosleep, philo);
	if (philo->lst->running == 1)
		pressftotalk(philo, 0);
}
