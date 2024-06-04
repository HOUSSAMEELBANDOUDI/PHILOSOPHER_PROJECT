/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:26:40 by hel-band          #+#    #+#             */
/*   Updated: 2024/05/28 16:56:18 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int	is_digit(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

static int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	if (len > 10)
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	long	rslt;

	rslt = 0;
	if (*str == '+')
		str++;
	if (!(ft_strlen(str) && is_digit(str)))
		return (-1);
	while (*str)
	{
		rslt = rslt * 10 + (*str - 48);
		str++;
	}
	if (rslt > INT_MAX)
		return (-1);
	return (rslt);
}

int	check_valid_args(char **av)
{
	if (ft_atoi(av[1]) > PHILO_MAX || ft_atoi(av[1]) <= 0)
		return (1);
	if (ft_atoi(av[2]) <= 0)
		return (1);
	if (ft_atoi(av[3]) <= 0)
		return (1);
	if (ft_atoi(av[4]) <= 0)
		return (1);
	if (av[5] && ft_atoi(av[5]) <= 0)
		return (1);
	return (0);
}
