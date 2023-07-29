/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:53:54 by htaheri           #+#    #+#             */
/*   Updated: 2023/07/20 12:51:21 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	find_indexes(t_list *list_a, int min)
{
	int	index;

	index = 0;
	while (list_a->content != min)
	{
		index++;
		list_a = list_a->next;
	}
	return (index);
}

int	find_mins(t_list *list_a)
{
	t_list	*test;
	int		min;

	test = list_a;
	min = list_a->content;
	while (test != NULL)
	{
		if (min > test->content)
			min = test->content;
		test = test->next;
	}
	return (min);
}

void	push_mins_to_b(t_list **sa, t_list **sb)
{
	int		min;
	int		index;
	int		i;
	int		size;

	i = -1;
	size = ft_lstsize(*sa);
	while (++i <= size - 3)
	{
		min = find_mins(*sa);
		index = find_indexes(*sa, min);
		if (index > size / 2 && index < size)
		{
			while (index > size / 2 && index++ < size)
				reverse_rotate_list(sa, 1);
		}
		else
		{
			while (index-- > 0)
				rotate_list(sa, 1);
		}
		push_list(sa, sb, 1);
		size--;
	}
}

void	sort_5(t_list **sa, t_list **sb)
{
	int	size;

	size = ft_lstsize(*sa);
	push_mins_to_b(sa, sb);
	sort_3(sa, 1);
	while (size - 3)
	{
		push_list(sa, sb, 0);
		size--;
	}
}
