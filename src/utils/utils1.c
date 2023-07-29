/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:53:29 by htaheri           #+#    #+#             */
/*   Updated: 2023/07/19 19:55:04 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	mem_free(int k, char **strings)
{
	while (k >= 0)
	{
		free(strings[k]);
		k--;
	}
	free(strings);
	return (0);
}

int	count_words(char **sp)
{
	int	i;

	i = 0;
	while (sp[i])
		i++;
	return (i);
}
