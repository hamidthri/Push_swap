/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_bigger.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:58:47 by htaheri           #+#    #+#             */
/*   Updated: 2023/07/29 13:18:48 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	rotate_count(t_list *s, int index)
{
	int	n;

	n = 0;
	while (s && s->index != index)
	{
		s = s->next;
		n++;
	}
	return (n);
}

int	square_root(int n)
{
	int	i;

	i = 0;
	while (i * i < n)
		i++;
	return (i - 1);
}

double	square_n(int num)
{
	int		smaller;
	int		larger;
	double	result;
	int		sq;

	smaller = square_root(num);
	larger = smaller + 1;
	if (num - (smaller * smaller) <= (larger * larger) - num)
	{
		sq = larger * larger;
		result = (num + sq) / (2.0 * larger);
		return (result);
	}
	else
	{
		sq = smaller * smaller;
		result = (num + sq) / (2.0) / smaller;
		return (result);
	}
}

void	back_to_a(t_list **sa, t_list **sb, int len)
{
	int		i;

	i = 0;
	while (len--)
	{
		i = rotate_count(*sb, len);
		if (2 * i > len)
		{
			while ((*sb)->index != len)
				reverse_rotate_list(sb, 0);
		}
		else
		{
			while ((*sb)->index != len)
				rotate_list(sb, 0);
		}
		push_list(sa, sb, 0);
	}
}

void	sort_bigger(t_list **sa, t_list **sb)
{
	int	i;
	int	len;
	int	threshold;

	i = 0;
	len = ft_lstsize(*sa);
	threshold = 1.6 * square_n(len);
	while (*sa)
	{
		if ((*sa)->index <= threshold + i)
		{
			push_list(sa, sb, 1);
			if ((*sb)->index <= i++)
				rotate_list(sb, 0);
		}
		else
			rotate_list(sa, 1);
	}
	back_to_a(sa, sb, len);
}
