/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myusleep.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 20:53:11 by jporta            #+#    #+#             */
/*   Updated: 2022/03/01 20:53:14 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

unsigned long	timestamp(t_philo *philo)
{
	unsigned long	i;

	gettimeofday(&philo->lst->reftime, NULL);
	i = ((unsigned long)philo->lst->reftime.tv_sec * 1000)
		+ ((unsigned long)philo->lst->reftime.tv_usec / 1000);
	return (i - philo->lst->firsttime - 100);
}

void	getupdatetime(t_philo *philo)
{
	unsigned long	i;

	gettimeofday(&philo->lst->reftime, NULL);
	i = ((unsigned long)philo->lst->reftime.tv_sec * 1000)
		+ ((unsigned long)philo->lst->reftime.tv_usec / 1000);
	philo->phdeath = i - philo->lasttime;
	philo->lasttime = i;
}

unsigned long	checktime(t_philo *philo)
{
	unsigned long	i;

	gettimeofday(&philo->lst->reftime, NULL);
	i = ((unsigned long)philo->lst->reftime.tv_sec * 1000)
		+ ((unsigned long)philo->lst->reftime.tv_usec / 1000);
	return (i - philo->lasttime);
}

void	myusleep(unsigned long microsec, t_philo *philo)
{
	unsigned long	i;
	unsigned long	k;

	gettimeofday(&philo->lst->reftime, NULL);
	i = ((unsigned long)philo->lst->reftime.tv_sec * 1000)
		+ ((unsigned long)philo->lst->reftime.tv_usec / 1000);
	k = i + microsec;
	while (i < k)
	{
		usleep(200);
		gettimeofday(&philo->lst->reftime, NULL);
		i = ((unsigned long)philo->lst->reftime.tv_sec * 1000)
			+ ((unsigned long)philo->lst->reftime.tv_usec / 1000);
	}
}
