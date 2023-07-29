/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:48:59 by htaheri           #+#    #+#             */
/*   Updated: 2023/07/24 19:50:42 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	is_digit(char *args)
{
	int	i;

	i = 0;
	if ((args[i] == '+' || args[i] == '-') && ft_isdigit(args[i + 1]))
			i++;
	while (args[i])
	{
		while (args[i] == ' ' || args[i] == '\t')
			i++;
		if ((args[i] == '+' || args[i] == '-') && !(args[i - 1]))
			i++;
		if (!ft_isdigit(args[i]))
			return (0);
		i++;
	}
	return (1);
}

long	long_atoi(char *str)
{
	int			i;
	int			flag;
	long		num;

	i = 0;
	flag = 1;
	num = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			flag *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (flag * num);
}

int	is_valid_integer(char **args)
{
	int		i;

	if (!args)
	{
		mem_free(count_words(args), args);
		return (0);
	}
	i = 0;
	while (args[i])
	{
		if (!is_digit(args[i]))
			return (0);
		if (long_atoi(args[i]) > INT_MAX || long_atoi(args[i]) < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}
