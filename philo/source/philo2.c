/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:42:34 by jporta            #+#    #+#             */
/*   Updated: 2022/03/02 00:01:39 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*stack;

	stack = (void *)malloc(num * size);
	if (!stack)
		return (0);
	ft_bzero (stack, (num * size));
	return (stack);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n)
	{
		((unsigned char *)str)[a] = c;
		a++;
	}
	return (str);
}

void	sleepingandthink(t_philo	*philo)
{
	myusleep(philo->lst->timetoeat, philo);
	sleeping(philo);
	myusleep(philo->lst->timetosleep, philo);
	if (philo->lst->running == 1)
		pressftotalk(philo, 0);
}
