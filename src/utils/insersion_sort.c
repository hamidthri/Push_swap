/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insersion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:11:27 by htaheri           #+#    #+#             */
/*   Updated: 2023/08/01 16:16:47 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	get_idexes(t_list **sa, int *array, int size)
{
	int					j;
	t_list				*temp;

	j = 0;
	temp = *sa;
	while (temp != NULL)
	{
		j = 0;
		while (j < size)
		{
			if (temp->content == array[j])
			{
				temp->index = j;
				break ;
			}
			j++;
		}
		temp = temp->next;
	}
}

int	*fill_array(t_list *sa, int size)
{
	int		n;
	int		*array;

	array = (int *)malloc(size * sizeof(int));
	if (!array)
		return (NULL);
	n = 0;
	while (sa != NULL)
	{
		array[n++] = sa->content;
		sa = sa->next;
	}
	return (array);
}

int	*insertionsort(t_list **sa, int size)
{
	int		step;
	int		key;
	int		j;
	int		*array;

	array = fill_array(*sa, size);
	step = 1;
	while (step < size)
	{
		key = array[step];
		j = step - 1;
		while (j >= 0 && key < array[j])
		{
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = key;
		step++;
	}
	return (array);
}

void	insertion(t_list **sa)
{
	int		*array;

	array = insertionsort(sa, ft_lstsize(*sa));
	get_idexes(sa, array, ft_lstsize(*sa));
	free (array);
}
